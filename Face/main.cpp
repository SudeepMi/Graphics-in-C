#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\tc\bgi");
setcolor(GREEN);
setbkcolor(0);
/*-------------------CHIN------------------------*/

ellipse(298,244,160,380,60,80);

/*----------------- HAIR ------------------------*/

arc(300,219,400,140,80);
ellipse(355,190,270,438,10,28);
arc(359,188,169,265,30);
ellipse(288,190,180,360,40,20);
ellipse(239,193,96,370,8,25);

/*---------------Eye Brows-------------------------*/

arc(282,255,89,130,40);
arc(278,259,80,120,40);
arc(314,255,405,92,40);
arc(319,259,420,100,40);
line(310,215,310,220);
line(284,215,284,219);

/*-------------------Eyes--------------------------*/

setfillstyle(SOLID_FILL,WHITE);
ellipse(320,230,0,360,10,5);
ellipse(275,230,0,360,10,5);
fillellipse(320,230,10,5);
fillellipse(275,230,10,5);
setfillstyle(SOLID_FILL,BLACK);
ellipse(320,230,0,360,4,4);
ellipse(275,230,0,360,4,4);
fillellipse(320,230,5,5);
fillellipse(275,230,5,5);

/*------------------Nose----------------------*/

ellipse(280,220,270,0,10,40);
ellipse(315,220,180,270,10,40);
ellipse(285,260,100,285,8,7);
ellipse(310,260,255,70,8,7);
circle(320,230,2);
circle(275,230,2);
arc(297,257,228,689,15);

/*---------------------MOUTH--------------------*/

ellipse(298,290,0,360,30,7);
line(270,290,326,290);

/*----------------------Ears--------------------*/

ellipse(234,240,0,330,4,20);
ellipse(362,240,220,170,4,20);
getch();
closegraph();
restorecrtmode();
}
