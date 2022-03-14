#include<graphics.h>
#include<conio.h>
#include<dos.h>

int getBoxPlacement(int x, int y){

	int xpos =  x%2;
	int ypos = y%2;
	if(xpos==ypos){
		return 0;
	}
	return 1;	
}

main()
{
    int gd = DETECT, gm;
  
    initgraph(&gd, &gm, "");
   outtextxy(20, 20 + 20, "Program to chess board in C graphics");

	//initilizing the type of variables

	int i,j,m=60;

	//loop for first area
 	
	for(i=m;i<=540;i++)
	{
		for(j=m;j<=540;j++)
		{
			int xcordinate = i/60;
			int ycordinate = j/60;
			int checker = getBoxPlacement(xcordinate,ycordinate);
			if(checker==0){
				putpixel(i, j, BLACK);
			}else{
				putpixel(i,j,WHITE);
			}
			//putpixel(j, i, WHITE);
		}
	
	}

	


    //getch();
   getch();
   closegraph();
}
