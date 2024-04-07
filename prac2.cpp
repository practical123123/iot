Practical 2:a

#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd,gm,x,y;
clrscr();
gd=DETECT;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
x=getmaxx();
y=getmaxy();
line(x/2,0,x/2,y);
line(0,y/2,x,y/2);
circle(x/4,y/4,50);
rectangle(x/2+50,20,x/2+300,y/2-50);
ellipse(x/4,y/2+100,0,360,100,50);
ellipse(x/2+150,y/2+100,0,180,100,50);
getch();
}


