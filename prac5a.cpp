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



