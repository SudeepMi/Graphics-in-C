#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void boundaryfill8(int x,int y,int fillColor,int borderColor)
{
    int interiorColor;
    interiorColor = getpixel(x,y);
    if((interiorColor != borderColor) && (interiorColor != fillColor))
    {
        //SetPixel(x,y,fillcolor);
        putpixel(x,y,fillColor);
        boundaryfill8(x+1,y,fillColor,borderColor);
        boundaryfill8(x-1,y,fillColor,borderColor);
        boundaryfill8(x,y+1,fillColor,borderColor);
        boundaryfill8(x,y-1,fillColor,borderColor);
        boundaryfill8(x+1,y+1,fillColor,borderColor);
        boundaryfill8(x-1,y-1,fillColor,borderColor);
        boundaryfill8(x+1,y-1,fillColor,borderColor);
        boundaryfill8(x-1,y+1,fillColor,borderColor);
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
    boundaryfill8(h,k,4,2);
    //delay(100000);
    getch();
   	return 0;
}

