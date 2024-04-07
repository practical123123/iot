2.b) Draw a simple hut on the screen.
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd,gm;
clrscr();
gd=DETECT;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\Turboc3\\bgi");
rectangle(200,200,500,400);//body
rectangle(250,250,325,400); //door
rectangle(375,250,475,350); //window
line(375,300,475,300);
line(425,250,425,350);
line(100,100,400,100); //roof
line(100,100,200,200);
line(400,100,500,200);
line(100,100,0,200);
line(0,200,0,350);
line(0,350,200,400);
circle(100,175,20);
getch();
}