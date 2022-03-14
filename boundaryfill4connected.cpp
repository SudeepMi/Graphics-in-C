//Boundary fill algorithm using 4 connected region
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void boundaryfill4(int x,int y,int fillcolor,int bordercolor)
{
    int interiorColor;
    interiorColor = getpixel(x,y);
    if((interiorColor != bordercolor) && (interiorColor != fillcolor))
    {
        //SetPixel(x,y,fillcolor);
        putpixel(x,y,fillcolor);
        boundaryfill4(x+1,y,fillcolor,bordercolor);
        boundaryfill4(x,y+1,fillcolor,bordercolor);
        boundaryfill4(x-1,y,fillcolor,bordercolor);
        boundaryfill4(x,y-1,fillcolor,bordercolor);
    }
}
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");
    //initwindow(getmaxwidth(),getmaxheight());
    int h,k,radius;
    printf("Enter the center of circle\n");
    scanf("%d%d",&h,&k);
    printf("Enter radius of circle\n");
    scanf("%d",&radius);
    circle(h,k,radius);
    boundaryfill4(h,k,4,15);
    delay(10000);
    closegraph();
   return 0;
}
