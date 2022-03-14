#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int maxx,maxy,midx,midy;

void axis()
{
 
  cleardevice();
  line(midx,0,midx,maxy);
  line(0,midy,maxx,midy);
  getch();
  
}
int main()
{
  int gd,gm,x,y,z,ang,x1,x2,y1,y2;
  detectgraph(&gd,&gm);
  initgraph(&gd,&gm,"");
  setfillstyle(3,25);
  
  maxx=getmaxx();
  maxy=getmaxy();
  midx=maxx/2;
  midy=maxy/2;

  outtextxy(100,100,"ORIGINAL OBJECT");
  bar3d(midx+100,midy-20,midx+60,midy-90,20,5);
 

  setcolor(5);
  setfillstyle(3,5);
  
  outtextxy(100,20,"ROTATION");
  printf("\n Enter the Rotation angle: ");
  scanf("%d",&ang);
  x1=100*cos(ang*3.14/180)-20*sin(ang*3.14/180);
  y1=100*sin(ang*3.14/180)+20*sin(ang*3.14/180);
  x2=60*cos(ang*3.14/180)-90*sin(ang*3.14/180);
  y2=60*sin(ang*3.14/180)+90*sin(ang*3.14/180);
 setcolor(5);
  printf("\n After rotating about z-axis\n");
  bar3d(midx+100,midy-20,midx+60,midy-90,20,5);
  bar3d(midx+x1,midy-y1,midx+x2,midy-y2,20,5);
  delay(500);
getch();
  
  closegraph();
}

