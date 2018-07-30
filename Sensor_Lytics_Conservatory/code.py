
import mysql.connector
import pandas as pd
import serial
import datetime
import time
from Arduino import Arduino
import matplotlib.pyplot as pyplot
import matplotlib.animation as animation
import numpy as np
from drawnow import *

# MODULE TO START BUZZER IF THE TEMPERATURE IS ABOVE A PARTICULAR VALUE

def beep(delayms):
  board.analogWrite(10, 20)      # Almost any value can be used except 0 and 255                           # experiment to get the best tone
  time.sleep(delayms)            # wait for a delayms ms
  board.analogWrite(10, 0)       # 0 turns it off
  #delay(delayms);               # wait for a delayms ms   
 
# ASSIGNING PIN NUMBERS TO VARIABLES TO BE USED FOR CONTROLLING THE SYSTEM

ledPin = 13   		
ldrPin = 15
motorPin = 16  
blinkPin = 13 
watertime = 2 
waittime = 0.01 

# TAKING INPUT FROM THE USER 

crop = raw_input("Welcome! \nPlease enter the crop to be grown\n")

# ESTABLISHING CONNECTION WITH MYSQL DATABASE NAMED MAINDATA AND RETRIEVING INFORMATION CORRESPONDING TO THE ENTERED CROP FROM THE DATABASE

cnx = mysql.connector.connect(user = 'root',password = 'tiger', database='agro' )
cursor = cnx.cursor();

q = "select * from agro_data where name=%s"	# Query to be run on data in mysql		
cursor.execute(q,(crop,));			# executing the query
req_data = cursor.fetchall()			# fetching the result of the query that is run
df = pd.DataFrame(req_data,columns=['id','name','min_temp','max_temp','min_rain','max_rain','soil_type','soil_mois','light_inte','produce','remark','min_mois','max_mois','min_hum','max_hum'])
print("Hello User! The following are the conditions suitable for %s are",crop)
schema = list(df)				 # storing the schema of the databse in a dataframe
i=0

# DISPLAYING THE DATA RETRIEVED FOR THE PARTICULAR CROP

for ele in schema:
	print(ele+'\t'+str(req_data[0][i])+'\n')
	i=i+1

# FETCHING REAL TIME DATA FROM THE SENSORS

ad = serial.Serial('/dev/ttyACM1',115200)
board = Arduino("115200", port="/dev/ttyACM1")

time.sleep(2)					# waiting for sometime so that data may be start coming at the port
i=1
lhum=[]						# list storing the humidity values
ltmp=[]						# list storing the temperature values
lmoi=[]						# list storing the soil moisture values		
llig=[]						# list storing the light intensity values
work=0


line = ad.readline()
data_list = line.split(',')
hum = float(data_list[0])
tmp = float(data_list[1])
moi = float(data_list[2])
lig = int(data_list[3])

sensorValue = board.analogRead(14);

if(moi > 800):
	board.digitalWrite(motorPin, "HIGH"); 		# turn on the motor
	  	#time.sleep(watertime*1000)        	# multiply by 1000 to translate seconds to milliseconds  	
	board.digitalWrite(motorPin, "LOW");  		# turn off the motor
	  	#time.sleep(waittime*60000)        	# multiply by 60000 to translate minutes to milliseconds

ldrStatus = board.digitalRead(ldrPin)

if(tmp >= 30):
	beep(100)  					#calls a function beep().

if (ldrStatus <=100):
	board.digitalWrite(ledPin, "HIGH")
else:
	board.digitalWrite(ledPin, "LOW")

Hum= []							# list storing the humidity values
Temp=[]							# list storing the temperature values
soil_moist = []						# list storing the soil moisture values
light_int = []						# list storing the light intensity values
min_temp=[]						# list storing the minimum temp. values
max_temp=[]						# list storing the maximum temp. values
min_hum=[]						# list storing the minimum hum. values
max_hum=[]						# list storing the maximum hum. values
min_mois=[]						# list storing the minimum soil moisture values
max_mois=[]						# list storing the maximum soil moisture values
arduinoData = serial.Serial('/dev/ttyACM1', 115200) 	#Creating our serial object named arduinoData
pyplot.ion() 						#Tell matplotlib you want interactive mode to plot live data
cnt=0
x=[]


 
def makeFig(): #Create a function that makes our desired plot
		x.append(cnt)
              	pyplot.subplot(2,2,1)
    		pyplot.plot(Hum,'b')
		#pyplot.fill_between(x,min_hum,max_hum,facecolor='lightgrey')
		pyplot.title('Humidity(mm) Vs time(s)')
		pyplot.ylim(0,100)
		pyplot.subplot(2,2,2)
    		pyplot.plot(Temp,'b')
		pyplot.title('Temperature(C) Vs time(s)')
		pyplot.ylim(0,50)
    		pyplot.subplot(2,2,3)
		pyplot.plot(soil_moist,'b')
		pyplot.title('Soil Moisture(m^3) Vs time(s)')
		pyplot.ylim(0,1000)
		pyplot.subplot(2,2,4)
		pyplot.plot(light_int,'b')
		pyplot.title('Light Intensity Vs time(s)')
		pyplot.ylim(-2,2) 
 
while True: 						# While loop that loops forever
    while (arduinoData.inWaiting()==0): 		#Wait here until there is data
        pass 						#do nothing
    arduinoString = arduinoData.readline() 		#read the line of text from the serial port
    dataArray = arduinoString.split(',')   		#Split it into an array called dataArray
    humidity = float( dataArray[0])            		#Convert first element to floating number and put in humidity
    temperature =    float( dataArray[1])            	#Convert second element to floating number and put in temperature
    soil = float( dataArray[2])				#Convert third element to floating number and put in soil
    light  =float( dataArray[3])			#Convert fourth element to floating number and put in light
    Hum.append(humidity)                     		#Build our Hum array by appending humidity readings
    Temp.append(temperature)                     	#Building our Temp array by appending temperature readings
    soil_moist.append(soil)				#Building our soil_moist array by appending soil readings
    light_int.append(light)				#Building our light_int array by appending light readings
    min_temp.append(req_data[0][2])			#Building our min_temp array by appending minimum temp. readings
    max_temp.append(req_data[0][3])			#Building our max_temp array by appending maximum temp. readings
    min_hum.append(req_data[0][4])			#Building our min_hum array by appending minimum hum. readings
    max_hum.append(req_data[0][5])			#Building our max_hum array by appending maximum hum. readings			
    min_mois.append(req_data[0][11])
    min_mois.append(req_data[0][12])
    drawnow(makeFig)                       #Call drawnow to update our live graph
    pyplot.pause(.000001)                     #Pause Briefly. Important to keep drawnow from crashing
    cnt=cnt+1
    if(cnt>50):                            #If you have 50 or more points, delete the first one from the array
        Hum.pop(0)                       #This allows us to just see the last 50 data points
        Temp.pop(0)

    sensorValue = board.analogRead(14);















