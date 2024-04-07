Practical 3:a) Circle

#include<iostream.h>
#include<graphics.h>
#include<conio.h>
void main()
{
int gd,gm;
 int x ,y;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
 x = getmaxx()/2;
y = getmaxy()/2;
setcolor(RED);
outtextxy(200,300,”circle");
setcolor(RED);
circle(x, y, 100);
 getch();
}
   

b)Rectangle
#include<iostream.h>
#include<graphics.h>
#include<conio.h>
int main()
{
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm, "C:\\Turboc3\\BGI");
outtext("Rectangle");
rectangle(150, 50, 400, 150);
getch();
closegraph();
return 0;
}


c) Concentric circle
#include<iostream.h>
#include<graphics.h>
#include<conio.h>
void main()
{
 int gd = DETECT,gm,x ,y;
initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
/* Initialize center of circle with center of
screen */
x = getmaxx()/2;
y = getmaxy()/2;
outtextxy(240, 50, "Concentric Circles");
setcolor(RED);
circle(x, y, 30);
setcolor(GREEN);
circle(x, y, 50);
setcolor(YELLOW);
 circle(x, y, 70);
 setcolor(BLUE);
 circle(x, y, 90);
 getch();
}



d)Ellipse
#include<iostream-.h>
#include<graphics.h>
#include<conio.h>
int main()
{
int gd,gm;
int x ,y;
detectgraph(&gd,&gm);
initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
x = getmaxx()/2;
y = getmaxy()/2;
outtextxy(x-100, 50, "ELLIPSE");
ellipse(x, y, 0, 360, 120, 60);
getch();
}



e) Line
#include<iostream.h>
#include <graphics.h>
#include <conio.h>
void main()
{
 int gd,gm;
 detectgraph(&gd,&gm);
 initgraph(&gd, &gm, "C:/TURBOC3/BGI");
 outtext("Line");
 line(110,210,200,10);
 getch();
 closegraph();
}
