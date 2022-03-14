//flood fill algorithm using 4 connected region
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void floodfill4(int x,int y,int fillcolor,int interiorcolor)
{
    int color;
    color = getpixel(x,y);
    if(color == interiorcolor)
    {
        putpixel(x,y,fillcolor);
        floodfill4(x+1,y,fillcolor,interiorcolor);
        floodfill4(x,y+1,fillcolor,interiorcolor);
        floodfill4(x-1,y,fillcolor,interiorcolor);
        floodfill4(x,y-1,fillcolor,interiorcolor);
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
    floodfill4(h,k,2,0);
    delay(10000);
    getch();
    closegraph();
   return 0;
}
