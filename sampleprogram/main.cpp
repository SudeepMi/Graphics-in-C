#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
main()
{
   int gd = DETECT, gm, midx, midy;

   initgraph(&gd, &gm, "");
   midx = getmaxx()/2;
   midy = getmaxy()/2;

   setcolor(RED);
   settextstyle(BOLD_FONT, HORIZ_DIR, 3);
   settextjustify(CENTER_TEXT, CENTER_TEXT);
   outtextxy(midx, midy-10, "Traffic Light Simulation");
   outtextxy(midx, midy+10, "Press any key to start");
   getch();
   
   cleardevice();
   setcolor(WHITE);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   rectangle(midx-30,midy-80,midx+30,midy+80);
   circle(midx, midy-50, 22);
   setfillstyle(SOLID_FILL,RED);
   floodfill(midx, midy-50,WHITE);
   setcolor(WHITE);
   outtextxy(midx,midy-50,"STOP");
   
   delay(5000);
   graphdefaults();
   cleardevice();
   setcolor(WHITE);
   rectangle(midx-30,midy-80,midx+30,midy+80);
   circle(midx, midy, 20);
   setfillstyle(SOLID_FILL,YELLOW);
   floodfill(midx, midy,WHITE);
   setcolor(WHITE);
   outtextxy(midx-18,midy-3,"READY");

   delay(5000);
   cleardevice();
   setcolor(WHITE);
   rectangle(midx-30,midy-80,midx+30,midy+80);
   circle(midx, midy+50, 22);
   setfillstyle(SOLID_FILL,GREEN);
   floodfill(midx, midy+50,WHITE);
   setcolor(WHITE);
   outtextxy(midx-7,midy+48,"GO");
   setcolor(RED);
   settextstyle(BOLD_FONT, HORIZ_DIR, 4);
   outtextxy(midx-150, midy+100, "Press any key to exit...");

   getch();
   closegraph();
   return 0;
}
