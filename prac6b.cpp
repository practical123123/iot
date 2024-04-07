b) Write a program to implement 2D Translation.
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd = DETECT, gm;
 int x1, y1, x2, y2, x3, y3, tx, ty;
 cout << "Enter the coordinates of the triangle:
";
 cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
 cout << "Enter the translation factors for X
and Y: ";
 cin >> tx >> ty;
 initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
 // Draw the original triangle
 line(x1, y1, x2, y2);
 line(x2, y2, x3, y3);
 line(x3, y3, x1, y1);
 // Scale the triangle
 x1 += tx; y1 += ty;
 x2 += tx; y2 += ty;
 x3 += tx; y3 += ty;
 // Draw the translated triangle
 setcolor(RED);
 line(x1, y1, x2, y2);
 line(x2, y2, x3, y3);
 line(x3, y3, x1, y1);
 getch();
 closegraph();
}