#include<stdio.h>  
#include<graphics.h>  
#include<math.h>  
main()  
{  
    int gd=0,gm,i=0;
	int x[3],y[3];  
    double s,c,angle;  
    initgraph(&gd, &gm, "");  
    setcolor(RED);  
    for(i=0;i<3;i++){
    printf("Enter coordinates of triangle: (x%d,y%d):",i+1,i+1);
    scanf("%d,%d",&x[i],&y[i]);   	
	}
    
    cleardevice();  
    line(x[0],y[0],x[1],y[1]);  
    line(x[1],y[1], x[2],y[2]);  
    line(x[2], y[2], x[0], y[0]);  
	delay(500); 
    printf("Enter rotation angle: ");  
    scanf("%lf", &angle);  
    c = cos(angle *M_PI/180);  
    s = sin(angle *M_PI/180);  
    x[0] = floor(x[0] * c + y[0] * s);  
    y[0] = floor(-x[0] * s + y[0] * c);  
    x[1] = floor(x[1] * c + y[1] * s);  
    y[1] = floor(-x[1] * s + y[1] * c);  
    x[2] = floor(x[2] * c + y[2] * s);  
    y[2] = floor(-x[2] * s + y[2] * c);  
	delay(500);
	setcolor(2);
    line(x[0], y[0] ,x[1], y[1]);  
    line(x[1],y[1], x[2],y[2]);  
    line(x[2], y[2], x[0], y[0]);  
    getch();  
    //closegraph();  
    return 0;  
}  

