//Boundary fill algorithm using 4 connected region
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void boundaryfill8(int x,int y,int fillcolor,int bordercolor)
{
    int interiorColor;
    interiorColor = getpixel(x,y);
    if((interiorColor != bordercolor) && (interiorColor != fillcolor))
    {
        //SetPixel(x,y,fillcolor);
        putpixel(x,y,fillcolor);
        boundaryfill8(x+1,y,fillcolor,bordercolor);
        boundaryfill8(x,y+1,fillcolor,bordercolor);
        boundaryfill8(x-1,y,fillcolor,bordercolor);
        boundaryfill8(x,y-1,fillcolor,bordercolor);
        
    }
}
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int h,k,radius;
    printf("Enter the center of circle\n");
    scanf("%d,%d",&h,&k);
    printf("Enter radius of circle\n");
    scanf("%d",&radius);
    circle(h,k,radius);
    boundaryfill8(h,k,2,15);
   // delay(10000);
    getch();
   return 0;
}
