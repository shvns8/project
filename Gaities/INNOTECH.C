#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>


int mnth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
char week[7][10];
int i,r,t,mn,date,year,s=0;
char ch;
int res[5],mon[5],yr1[5],yr2[5],sum=0,month=0,y1=0,y2=0;
void first_page()            /*welcome page*/
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(WHITE);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
setcolor(GREEN);
outtextxy(180,100,"WELCOME");
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(50,25,"KIET    INNOTECH    2k16");
setcolor(GREEN);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(290,190,"TO");
setcolor(GREEN);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,10);
outtextxy(60,220,"GAIETIES");
setcolor(DARKGRAY);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(400,420,"Press Enter To Continue");
setcolor(BROWN);
setlinestyle(SOLID_LINE,0,2);
line(10,0,10,getmaxy());
line(13,0,13,getmaxy());
line(0,470,getmaxx(),470);
line(0,473,getmaxx(),473);
while(!kbhit)
{
cleardevice();
}

getch();
closegraph();
}


void second_page()                         /*about gaieties*/
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(WHITE);
setcolor(BROWN);
setlinestyle(SOLID_LINE,0,2);
line(10,0,10,getmaxy());
line(13,0,13,getmaxy());
line(0,470,getmaxx(),470);
line(0,473,getmaxx(),473);
settextstyle(GOTHIC_FONT,HORIZ_DIR,10);
setcolor(RED);
outtextxy(15,10,"G");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
setcolor(RED);
outtextxy(90,100,"AIETIES  WILL  TELL  YOU");
outtextxy(90,150,"YOUR DATE OF BIRTH AND ");
outtextxy(90,200,"DAY...WITHOUT ASKING ");
outtextxy(90,250,"FROM YOU....");
line(220,200,530,200);
line(90,250,170,250);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
setcolor(GREEN);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
outtextxy(25,350,"ISN'T IT FUN?");
line(25,400,300,400);
setcolor(DARKGRAY);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(400,420,"Press Enter To Continue");
while(!kbhit)
{
cleardevice();
}
getch();
closegraph();
}

void third_page()                               /*instructios*/
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(WHITE);
setcolor(BROWN);
setlinestyle(SOLID_LINE,0,2);
line(10,0,10,getmaxy());
line(13,0,13,getmaxy());
line(0,470,getmaxx(),470);
line(0,473,getmaxx(),473);


settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
setcolor(BLUE);
outtextxy(25,30,"Before Going Further Let's Go Through");
outtextxy(25,65,"Some Instructions:-");
setcolor(GREEN);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
outtextxy(35,110,"1. There are five iterations only.");
outtextxy(35,145,"2. Some numbers will display in each iteration.");
outtextxy(35,180,"3. You have to search your DATE,MONTH,YEAR's last");
outtextxy(35,205,"digit and YEAR's second last digit in those numbers.");
outtextxy(35,245,"4. Press 'Y' if you find any of the underlined data. ");
outtextxy(35,280,"5. Else press 'N'.");
setcolor(BLUE);
setfillstyle(SOLID_FILL,YELLOW);
circle(105,400,50);
floodfill(107,390,BLUE);


setcolor(BLUE);
setfillstyle(SOLID_FILL,WHITE);
circle(85,385,5);
floodfill(86,384,BLUE);

setcolor(BLUE);
setfillstyle(SOLID_FILL,WHITE);
circle(120,385,5);
floodfill(121,386,BLUE);
setcolor(BLUE);
setfillstyle(SOLID_FILL,WHITE);
rectangle(100,400,105,415);
floodfill(102,403,BLUE);
setcolor(RED);
arc(103,417,180,0,15);
setcolor(BLUE);
settextstyle(BOLD_FONT,HORIZ_DIR,1);
outtextxy(84,351,".");
outtextxy(118,351,".");
setcolor(DARKGRAY);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(400,420,"Press Enter To Continue");
while(!kbhit)
{
cleardevice();
}

getch();
closegraph();
}
					       /*drive to game*/
void fourth_page()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(WHITE);
setcolor(BROWN);
setlinestyle(SOLID_LINE,0,2);
line(10,0,10,getmaxy());
line(13,0,13,getmaxy());
line(0,470,getmaxx(),470);
line(0,473,getmaxx(),473);
setcolor(CYAN);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
outtextxy(40,80,"ARE YOU READY !!!!");
setcolor(GREEN);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);

outtextxy(50,200,"LET'S DRIVE TO GAME....");
setcolor(DARKGRAY);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(400,420,"Press Enter To Continue");


while(!kbhit)
{
cleardevice();
}

getch();
closegraph();
}













void fifth_page()                      /*driving a car*/
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
for(i=0;i<=getmaxx()-50;i+=10)
{
cleardevice();
setbkcolor(WHITE);
setcolor(BLUE);
line(0,275,getmaxx(),275);
setfillstyle(SOLID_FILL,RED);
setcolor(WHITE);
line(30+i,270,54+i,270);
line(30+i,270,30+i,250);
line(30+i,250,60+i,240);
line(60+i,240,90+i,240);
line(90+i,240,130+i,250);
line(130+i,250,130+i,270);
line(130+i,270,110+i,270);
arc(101+i,270,0,180,8);
line(92+i,270,70+i,270);
arc(62+i,270,0,180,8);
floodfill(i+31,255,WHITE);
setcolor(BLUE);
setfillstyle(SOLID_FILL,DARKGRAY);
circle(63+i,270,6);
floodfill(64+i,271,BLUE);
circle(101+i,270,6);

floodfill(102+i,271,BLUE);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);

rectangle(82+i,247,90+i,255);
floodfill(83+i,248,BLACK);
rectangle(62+i,247,74+i,255);
floodfill(63+i,248,BLACK);
delay(20);

setcolor(BLUE);
}

getch();
closegraph();
}
void twelvthe_page()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(WHITE);
setcolor(BROWN);
setlinestyle(SOLID_LINE,0,2);
line(10,0,10,getmaxy());
line(13,0,13,getmaxy());
line(0,470,getmaxx(),470);
line(0,473,getmaxx(),473);


settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
setcolor(BLUE);
outtextxy(40,50,"  CREATED  BY  :-");
setcolor(RED);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
outtextxy(50,150," . SARTHAK SAXENA");
outtextxy(50,220," . SHIVANSH GUPTA");
outtextxy(50,290," .  YASH    SAXENA");
setcolor(DARKGRAY);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(400,420,"Press Enter To Continue");
while(!kbhit)
{
cleardevice();
}
getch();
closegraph();
}

void thirteenth_page()
{
int j,k,gd=DETECT,gm,i,x,y;

initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(LIGHTBLUE);

while(!kbhit())
{
for(i=0;i<=500;i++)
{
x=rand()%getmaxx();
y=rand()%getmaxy()/2;
putpixel(x,y,15);
}
j=380;
k=40;
setcolor(BLUE);
setfillstyle(SOLID_FILL,YELLOW);
circle(105+j,400-k,50);
floodfill(107+j,390-k,BLUE);

setcolor(BLUE);
setfillstyle(SOLID_FILL,WHITE);
circle(85+j,385-k,5);
floodfill(86+j,384-k,BLUE);

setcolor(BLUE);
setfillstyle(SOLID_FILL,WHITE);
circle(120+j,385-k,5);
floodfill(121+j,386-k,BLUE);
setcolor(BLUE);
setfillstyle(SOLID_FILL,WHITE);
rectangle(100+j,400-k,105+j,415-k);
floodfill(102+j,403-k,BLUE);
setcolor(RED);
arc(103+j,417-k,180,0,15);
setcolor(BLUE);
settextstyle(BOLD_FONT,HORIZ_DIR,1);
outtextxy(84+j,351-k,".");
outtextxy(118+j,351-k,".");

setcolor(WHITE);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,9);
outtextxy(25,300,"THANK ");

setcolor(WHITE);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,9);
outtextxy(375,300,"Y");

setcolor(WHITE);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,9);
outtextxy(535,300,"U");

delay(100);
cleardevice();
}
getch();
closegraph();
}




void sixth_page()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(RED);
printf("\n\n\n\n\n29\t\t 21\t\t 5\t\t 17\n\n1\t\t 13\t\t 9\t\t 25\n\n27\t\t 3\t\t 15\t\t 19\n\n11\t\t 7\t\t 23\t\t 31\n\n\n\n");
printf("IF THE FOLLOWING ARE PRESENT AMONG THESE NUMBERS ENTER 'Y' ELSE ENTER 'N'\n");
printf("\n\nBirth Date (Y/N)\n");
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
res[4]=1;
else
res[4]=0;

printf("Birth Month (Y/N)\n");
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
mon[4]=1;
else
mon[4]=0;

printf("Last Digit Of Birth Year (Y/N)\n");
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
yr1[4]=1;
else
yr1[4]=0;

printf("Second Last Digit Of Birth Year (Y/N)\n");
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
yr2[4]=1;
else
yr2[4]=0;
printf("\n\n\n\t\t\t\t\t\t\tPress Enter To Continue");
getch();
closegraph();
}

void seventh_page()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(MAGENTA);
printf("\n\n\n\n\n18\t\t 31\t\t 2\t\t 10\n\n26\t\t 27\t\t 6\t\t 22\n\n30\t\t 11\t\t 3\t\t 19\n\n23\t\t 7\t\t 14\t\t 15\n\n\n\n");
printf("IF THE FOLLOWING ARE PRESENT AMONG THESE NUMBERS ENTER 'Y' ELSE ENTER 'N'\n\n\n\n");
printf("Birth Date (Y/N)\n");
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
res[3]=1;
else
res[3]=0;
printf("Birth Month (Y/N)\n");
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
mon[3]=1;
else
mon[3]=0;

printf("Last Digit Of Birth Year (Y/N)\n");
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
yr1[3]=1;
else
yr1[3]=0;

printf("Second Last Digit Of Birth Year (Y/N)\n" );
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
yr2[3]=1;
else
yr2[3]=0;
printf("\n\n\n\t\t\t\t\t\t\tPress Enter To Continue");
getch();
closegraph();
}

void eight_page()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(GREEN);
printf("\n\n\n\n\n4\t\t 12\t\t 31\t\t 20\n\n22\t\t 6\t\t 14\t\t 28\n\n23\t\t 21\t\t 30\t\t 5\n\n13\t\t 15\t\t 7\t\t 29\n\n\n\n");
printf("IF THE FOLLOWING ARE PRESENT AMONG THESE NUMBERS ENTER 'Y' ELSE ENTER 'N'\n\n\n\n");
printf("Birth Date (Y/N)\n");
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
res[2]=1;
else
res[2]=0;

printf("Birth Month (Y/N)\n");
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
mon[2]=1;
else
mon[2]=0;

printf("Last Digit Of Birth Year (Y/N)\n");
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
yr1[2]=1;
else
yr1[2]=0;

printf("Second Last Digit Of Birth Year (Y/N)\n");
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
yr2[2]=1;
else
yr2[2]=0;
printf("\n\n\n\t\t\t\t\t\t\tPress Enter To Continue");
getch();
closegraph();
}

void ninth_page()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(RED);
printf("\n\n\n\n\n29\t\t 8\t\t 15\t\t 13\n\n27\t\t 11\t\t 25\t\t 14\n\n26\t\t 9\t\t 31\t\t 12\n\n30\t\t 10\t\t 24\t\t 28\n\n\n\n");
printf("IF THE FOLLOWING ARE PRESENT AMONG THESE NUMBERS ENTER 'Y' ELSE ENTER 'N'\n\n\n\n");
printf("Birth Date (Y/N)\n");
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
res[1]=1;
else
res[1]=0;

printf("Birth Month (Y/N)\n");
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
mon[1]=1;
else
mon[1]=0;

printf("Last Digit Of Birth Year (Y/N)\n");
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
yr1[1]=1;
else
yr1[1]=0;

printf("Second Last Digit Of Birth Year (Y/N)\n");
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
yr2[1]=1;
else
yr2[1]=0;
printf("\n\n\n\t\t\t\t\t\t\tPress Enter To Continue");
getch();
closegraph();
}
void tenth_page()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(CYAN);
printf("\n\n\n\n\n28\t\t 24\t\t 23\t\t 16\n\n18\t\t 26\t\t 21\t\t 29\n\n31\t\t 17\t\t 19\t\t 22\n\n25\t\t 20\t\t 27\t\t 30\n\n\n\n");
printf("IF THE FOLLOWING ARE PRESENT AMONG THESE NUMBERS ENTER 'Y' ELSE ENTER 'N'\n\n\n\n");
printf("Birth Date (Y/N)\n");
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
res[0]=1;
else
res[0]=0;

printf("Birth Month (Y/N)\n");
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
mon[0]=1;
else
mon[0]=0;

printf("Last Digit Of Birth Year (Y/N)\n");
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
yr1[0]=1;
else
yr1[0]=0;

printf("Second Last Digit of Birth Year (Y/N)\n");
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
yr2[0]=1;
else
yr2[0]=0;
printf("\n\n\n\t\t\t\t\t\t\tPress Enter To Continue");
getch();
closegraph();
}
/*void eleventh_page()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(WHITE);
setlinestyle(SOLID_LINE,0,2);
//line(10,0,10,getmaxy()-50);
//line(13,0,13,getmaxy()-50);
line(0,480,getmaxx(),480);
line(0,484,getmaxx(),484);

setbkcolor(MAGENTA);
sum=(res[0]*16)+(res[1]*8)+(res[2]*4)+(res[3]*2)+(res[4]);

month=(mon[0]*16)+(mon[1]*8)+(mon[2]*4)+(mon[3]*2)+(mon[4]);
y1=(yr1[0]*16)+(yr1[1]*8)+(yr1[2]*4)+(yr1[3]*2)+(yr1[4]);
y2=(yr2[0]*16)+(yr2[1]*8)+(yr2[2]*4)+(yr2[3]*2)+(yr2[4]);
gotoxy(15,8);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(130,200,"YOUR BIRTH DATE IS");
if(y2!=0&&y2!=1)
printf("\n\n\n\n\n\n\n\n\n\t\t\t\t %d/%d/19%d%d",sum,month,y2,y1);
else
printf("\n\n\n\n\n\n\n\n\n\t\t\t\t %d/%d/20%d%d",sum,month,y2,y1);
year=1900+10*y2+y1;
strcpy(week[0],"sunday");
strcpy(week[1],"monday");
strcpy(week[2],"tuesday");
strcpy(week[3],"wednesday");
strcpy(week[4],"thursday");
strcpy(week[5],"friday");
strcpy(week[6],"saturday");
if((year%400==0)||((year%4==0)&&(year%100!=0)))
{
mnth[1]=29;
for(i=0;i<month-1;i++)
s=s+mnth[i];
r=s+(sum+year+(year/4)-3);
t=r%7;
}
else
{
for(i=0;i<month-1;i++)
s=s+mnth[i];
r=s+(sum+year+(year/4)-2);
t=r%7;
}
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(200,350,"THE DAY IS");

printf("\n\n\n\n\n\n\n\n\n\t\t\t\t %s",week[t]);
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tPress Enter To Continue");
getch();
closegraph();
}
  */

void counter()
{
int gd=DETECT,gm;
int midx,i,midy;
char string[100];
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(12);
midx=getmaxx()/2;
midy=getmaxy()/2;
for(i=5;i>=0;i--)
{
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
rectangle(midx-50,midy-50,midx+50,midy+50);
floodfill(midx,midy,WHITE);
setcolor(BLUE);
sprintf(string,"%d",i);
outtextxy(midx,midy,string);
delay(400);

cleardevice();
}

setcolor(WHITE);
setlinestyle(SOLID_LINE,0,2);
//line(10,0,10,getmaxy()-50);
//line(13,0,13,getmaxy()-50);
line(0,480,getmaxx(),480);
line(0,484,getmaxx(),484);

setbkcolor(MAGENTA);
sum=(res[0]*16)+(res[1]*8)+(res[2]*4)+(res[3]*2)+(res[4]);

month=(mon[0]*16)+(mon[1]*8)+(mon[2]*4)+(mon[3]*2)+(mon[4]);
y1=(yr1[0]*16)+(yr1[1]*8)+(yr1[2]*4)+(yr1[3]*2)+(yr1[4]);
y2=(yr2[0]*16)+(yr2[1]*8)+(yr2[2]*4)+(yr2[3]*2)+(yr2[4]);
gotoxy(15,8);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(130,200,"YOUR BIRTH DATE IS");
if(y2!=0&&y2!=1)
printf("\n\n\n\n\n\n\n\n\n\t\t\t\t %d/%d/19%d%d",sum,month,y2,y1);
else
printf("\n\n\n\n\n\n\n\n\n\t\t\t\t %d/%d/20%d%d",sum,month,y2,y1);
if(y2!=0&&y2!=1)
{
year=1900+10*y2+y1;
}
else
{
year=2000+10*y2+y1;
}
strcpy(week[0],"sunday");
strcpy(week[1],"monday");
strcpy(week[2],"tuesday");
strcpy(week[3],"wednesday");
strcpy(week[4],"thursday");
strcpy(week[5],"friday");
strcpy(week[6],"saturday");
if((year%400==0)||((year%4==0)&&(year%100!=0)))
{
mnth[1]=29;
for(i=0;i<month-1;i++)
s=s+mnth[i];
r=s+(sum+year+(year/4)-3);
t=r%7;
}
else
{
for(i=0;i<month-1;i++)
s=s+mnth[i];
r=s+(sum+year+(year/4)-2);
t=r%7;
}
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(200,350,"THE DAY IS");

printf("\n\n\n\n\n\n\n\n\n\t\t\t\t %s",week[t]);
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tPress Enter To Continue");
getch();
closegraph();
}

void main()
{
first_page();
second_page();
third_page();
fourth_page();
fifth_page();
sixth_page();
seventh_page();
eight_page();
ninth_page();
tenth_page();
counter();

twelvthe_page();
thirteenth_page();
getch();
}