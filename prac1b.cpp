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
