#include<graphics.h>
#include<conio.h>
#include<dos.h>


main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
   	outtextxy(20, 20 + 20, "Program to draw an archery board");

	int radius = 20;
	setfillstyle(SOLID_FILL,WHITE);
 	circle(400,400,radius);
 	floodfill(400,400,15);
 	while(radius<=140){
 		radius+=20;
 		int color = radius/20;
 		setcolor(color);
 		circle(400,400,radius);
	 }
	 
   getch();
   closegraph();
}
