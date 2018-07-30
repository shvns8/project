#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
char ch;
int res[6],sum=0,i,x,y;
void page1()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(7);
 while(!kbhit())
 {
 for(i=0;i<=75;i++)
 {
 x=rand()%getmaxx();
 y=rand()%getmaxy();
 putpixel(x,y,30);

 setcolor(WHITE);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
outtextxy((getmaxx()/2)-160,0,"WELCOME");

 setcolor(GREEN);
 settextstyle(GOTHIC_FONT,HORIZ_DIR,5);
 outtextxy(30,150,"Please think of a number");
   outtextxy(70,200,"Of your choice");
    outtextxy(110,250,"between 1 and 50");

  setcolor(BLUE);
 settextstyle(SMALL_FONT,HORIZ_DIR,6);
 outtextxy(getmaxx()-230,getmaxy()-20,"Press enter to continue");
 }
 delay(500);
 cleardevice();
 }
 getch();
closegraph();
  }

void page2()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(6);


 setcolor(GREEN);
 settextstyle(GOTHIC_FONT,HORIZ_DIR,3);
 outtextxy(30,150,"FOLLOW");
   outtextxy(40,200,"The next few simple steps to know your...");
    outtextxy(110,250,"Chosen number");

    getch();
closegraph();
}


void page3()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(5);
settextstyle(BOLD_FONT,HORIZ_DIR,2);
outtextxy(25,200,"If your number is among these then ");
outtextxy(30,300," Enter 'Y' else enter 'N'");
printf("\n\n\n\n\n\t\t3\t\t7\t\t5\t\t11\t\t27\n\t\t37\t\t23\t\t17\t\t43\t\t25\n\t\t33\t\t41\t\t29\t\t39\t\t9\n\t\t1\t\t47\t\t15\t\t21\t\t13\n\t\t31\t\t45\t\t19\t\t35\t\t49\n\n");
ch=getchar();
if(ch=='Y'||ch=='y')
res[5]=1;
else
res[5]=0;
getch();
closegraph();
}


void page9()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(GREEN);
settextstyle(BOLD_FONT,HORIZ_DIR,2);
outtextxy(25,200,"If your number is among these then ");
outtextxy(30,300," Enter 'Y' else enter 'N'");
printf("\n\n\n\n\n14\t\t30\t\t10\t\t39\t\t34\n38\t\t19\t\t2\t\t7\t\t23\n46\t\t47\t\t27\t\t43\t\t42\n11\t\t15\t\t18\t\t3\t\t31\n50\t\t26\t\t22\t\t6\t\t35\n\n");
fflush(stdin);
ch=getchar();
if(ch=='y'||ch=='Y')
res[4]=1;
else
res[4]=0;
getch();
 closegraph();
}


void page4()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(12);
settextstyle(BOLD_FONT,HORIZ_DIR,2);
outtextxy(25,200,"If your number is among these then ");
outtextxy(30,300," Enter 'Y' else enter 'N'");
printf("\n\n\n\n\n22\t\t4\t\t38\t\t21\t\t46\n15\t\t7\t\t36\t\t13\t\t28\n30\t\t31\t\t47\t\t5\t\t39\n12\t\t37\t\t20\t\t6\t\t44\n14\t\t23\t\t29\t\t45\n\n");
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
res[3]=1;
else
res[3]=0;
closegraph();
 }

void page5()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(9);
settextstyle(BOLD_FONT,HORIZ_DIR,2);
outtextxy(25,200,"If your number is among these then ");
outtextxy(30,300," Enter 'Y' else enter 'N'");
printf("\n\n\n\n\n8\t\t10\t\t41\t\t24\t\t11\n40\t\t14\t\t44\t\t13\t\t29\n46\t\t30\t\t26\t\t25\t\t42\n9\t\t27\t\t43\t\t12\t\t45\n28\t\t15\t\t47\t\t31\n\n");
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
res[2]=1;
else
res[2]=0;
closegraph();
}

void page6()
{

int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(3);
settextstyle(BOLD_FONT,HORIZ_DIR,2);
outtextxy(25,200,"If your number is among these then ");
outtextxy(30,300," Enter 'Y' else enter 'N'");
printf("\n\n\n\n\n48\t\t31\t\t18\t\t23\t\t16\n28\t\t27\t\t20\t\t26\t\t50\n22\t\t30\t\t21\t\t17\t\t24\n19\t\t25\t\t29\t\t49\n\n");
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
res[1]=1;
else
res[1]=0;
closegraph();
}


void page7()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(GREEN);
settextstyle(BOLD_FONT,HORIZ_DIR,2);
outtextxy(25,200,"If your number is among these then ");
outtextxy(30,300," Enter 'Y' else enter 'N'");
printf("\n\n\n\n\n43\t\t44\t\t41\t\t32\t\t36\n34\t\t48\t\t38\t\t46\t\t40\n50\t\t35\t\t42\t\t37\t\t33\n39\t\t49\t\t45\t\t47\n\n");
fflush(stdin);
ch=getchar();
if(ch=='Y'||ch=='y')
res[0]=1;
else
res[0]=0;
closegraph();
}


void page8()
{
int gd=DETECT,gm;
int midx,i,midy;
char string[100];
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(8);
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
sum=(res[0]*32)+(res[1]*16)+(res[2]*8)+(res[3]*4)+(res[4]*2)+(res[5]);
gotoxy(15,8);
printf("The number is %d\n",sum);
getch();
closegraph();
}



void main()
{
page1();
page2();
page3();
page9();
page4();
page5();
page6();
page7();
page8();



getch();
}