Practical 7:
a) Perform 2D Rotation on a given object
#include <iostream.h>
#include <graphics.h>
#include <math.h>
#include <conio.h>
#define PI 3.142
void rotateTriangle(int &x,int &y,int x_pivot,int
y_pivot,double angle)
{
int x_shifted=x-x_pivot;
int y_shifted=y-y_pivot;
x=x_pivot + (int)(x_shifted*cos(angle)-
y_shifted*sin(angle));
y=y_pivot +
(int)(x_shifted*sin(angle)+y_shifted*cos(angle)) ;
}
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c://turboc3//bgi");
int x1=200, y1=200;
int x2=250,y2=250;
int x3=180, y3=270;
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
getch();
25 | P a g e
double angle;
cout<<"Enter the rotation angle in degrees:";
cin>>angle;
angle=angle*(PI/180);
rotateTriangle(x1,y1,x1,y1,angle);
rotateTriangle(x2,y2,x1,y1,angle);
rotateTriangle(x3,y3,x1,y1,angle);
cleardevice();
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
getch();
}


