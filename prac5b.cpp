b) Develop the program for the mid-point ellipse drawing algorithm.
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
 clrscr();
 long int yk,xk,x0,y0,k,p0,pk,sk,rx,ry;
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
 cout<<"Enter the value of radius along x axis:";
 cin>>rx;
 cout<<"Enter the value of radius along y axis:";
 cin>>ry;
 setcolor(WHITE);
 line(320,0,320,640);
 line(0,240,640,240);
 xk=0;
 yk=ry;
 pk=(ry*ry)-(rx*rx*ry)+(0.25*rx*rx);
 while((2*(ry*ry)*xk)<(2*(rx*rx)*yk))
 {
 putpixel(xk+320,yk+240,WHITE);
 putpixel(-xk+320,yk+240,WHITE);
 putpixel(xk+320,-yk+240,WHITE);
 putpixel(-xk+320,-yk+240,WHITE);
 if(pk<0)
 {
xk=xk+1;
pk=pk+2*(ry*ry)*xk+(ry*ry);
}
else
18 | P a g e
 {
xk=xk+1;
 yk=yk-1;
 pk=pk+2*(ry*ry)*xk-2*(rx*rx)*yk+(rx*rx);
 }
 delay(10);
 }
 x0=xk;
 y0=yk;
 sk=(ry*ry*pow((x0+0.5),2))+(rx*rx*pow((y0-1),2))-
(rx*rx*ry*ry);
 while(yk>0)
 {
putpixel(xk+320,yk+240,WHITE);
 putpixel(-xk+320,yk+240,WHITE);
 putpixel(xk+320,-yk+240,WHITE);
 putpixel(-xk+320,-yk+240,WHITE);
 if(sk>0)
 {
xk=xk;
 yk=yk-1;
 sk=sk-2*(rx*rx)*yk+(rx*rx);
 }
 else
 {
xk=xk+1;
 yk=yk-1;
 sk=sk+2*(ry*ry)*xk-2*(rx*rx)*yk+(rx*rx);
 }
 }
 delay(10);
 getch();
 closegraph();

}
