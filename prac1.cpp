practical 1a:basic function
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd,gm,x,y;
 gd=DETECT;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TurboC3\\BGI ");
x=getmaxx();
y=getmaxy();
putpixel(x/2,y/2,RED);
line(100,200,300,400);
getch();
}


b) Draw a coordinate axis at the center of the screen.
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd,gm,a,b;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\Turbo\\BGI ");
a=getmaxx();
b=getmaxy();
putpixel(a/2,b/2,10);
getch();
}




