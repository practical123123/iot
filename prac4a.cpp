]
#include<iostream.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
clrscr();
int gd,gm,i;
float x,y,x1,y1,x2,y2,dx,dy,delx,dely,l;
cout<<"\n Enter coordinates:";
cin>>x1>>y1>>x2>>y2;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
//calculate slope
dx=x2-x1;
dy=y2-y1;
//calculate length
if(dx>=dy)
l=dx;
else
l=dy;
delx=dx/l;
dely=dy/l;
x=x1;
y=y1;
i=1;
11 | P a g e
while(i<=l)
{
putpixel(x,y,WHITE);
x=x+delx;
y=y+dely;
i++;
delay(100);
}
getch();
closegraph();
}


