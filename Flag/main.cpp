#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
  int gd = DETECT, gm;
  initgraph(&gd, &gm, "");
  setcolor(RED);
  line(100,100,200,200);
  line(100,100,100,400);
  line(100,200,200,200);
  line(100,200,200,300);
  line(100,300,200,300);
  arc(130,170,180,360,10);
  ellipse(130,270,0,360,20,10);
  getch();
  closegraph();
  return 111;
}

