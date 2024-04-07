Practical 5:
a) Develop the program for the mid-point circle drawing algorithm.
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
 float midfactor;
 int x,y,radius,graphdriver,graphmode,i;
 cout<<"Enter the radius of circle:";
 cin>>radius;
 detectgraph(&graphdriver,&graphmode);
initgraph(&graphdriver,&graphmode,"C:\\TurboC3\\BGI");
 x=0;
 y=radius;
 midfactor=(5/4)-radius;
 line(getmaxx()/2,0,getmaxx()/2,getmaxy());
 line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
 do
 {
 putpixel(getmaxx()/2+x,getmaxy()/2+y,5);
 putpixel(getmaxx()/2+y,getmaxy()/2+x,5);
 putpixel(getmaxx()/2+y,getmaxy()/2-x,5);
 putpixel(getmaxx()/2+x,getmaxy()/2-y,5);
 putpixel(getmaxx()/2-x,getmaxy()/2-y,5);
 putpixel(getmaxx()/2-y,getmaxy()/2-x,5);
 putpixel(getmaxx()/2-y,getmaxy()/2+x,5);
 putpixel(getmaxx()/2-x,getmaxy()/2+y,5);
 if(midfactor<0)
 midfactor=midfactor+2*x+3;
 else
 {
midfactor=midfactor+2*(x-y)+5;
16 | P a g e
y=y-1;
 }
 x=x+1;
 }
 while(x<y);
 getch();
 closegraph();
}



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
