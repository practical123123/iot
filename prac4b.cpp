b) Develop the program for Bresenham’s Line drawing algorithm.
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
sign(int,int);
void main()
{
int x,y,x1,x2,y1,y2,s1,s2,dx,dy,temp,err,i,intchg;
 int gd,gm;
 cout<<"Enter the end points of a line:";
 cin>>x1>>y1>>x2>>y2;
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"c:\\TurboC3\\BGI");
 line(getmaxx()/2,0,getmaxx()/2,getmaxy());
 line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
 x=x1;y=y1;
 dx=abs(x2-x1);
 dy=abs(y2-y1);
 s1=sign(x2,x1);
 s2=sign(y2,y1);
 if(dy>dx)
 {
 temp=dx;
 dx=dy;
 dy=temp;
 intchg=1;
 }
 else
intchg=0;
 err=2*dy-dx;
 for(i=1;i<=dx;i++)
 {
 if((x>=0&&y>=0)||(x>=0&&y<=0))
13 | P a g e
 putpixel(x+getmaxx()/2,getmaxy()/2-y,WHITE);
 else if((x<=0&&y>=0)||(x<=0&&y<=0))
 putpixel(getmaxx()/2+x,getmaxy()/2-y,5);
 while(err>=0)
 {
 if(intchg==1)
x=x+s1;
 else
y=y+s2;
 err=err-2*dx;
 }
 if(intchg==1)
y=y+s2;
 else
x=x+s1;
 err=err+2*dy;
 }
 getch();
 closegraph();
}
int sign(int x2,int x1)
{
 if(x2<x1)return(-1);
 if(x2==x1)return(0);
 return(1);
}