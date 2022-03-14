#include <stdio.h>
#include <dos.h>
#include <graphics.h>
void lineDDA(int, int, int, int);
main(){
	int x1, y1, xn, yn;
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");
	printf("Enter the starting coordinates of line: ");
	scanf("%d,%d", &x1, &y1);
	printf("Enter the ending coordinates of line: ");
	scanf("%d,%d", &xn, &yn);
	lineDDA(x1, y1, xn, yn);
	getch();
}

void lineDDA(int x1, int y1, int x2, int y2){
	int dx, dy, m, i;
	m = (y2-y1)/(x2-x1);
	for (i=x1; i<=x2; i++){
		if (m <= 1){
			dx = 1;
			dy = m * dx;
		}else{
			dy = 1;
			dx = dy / m;
		}
		x1 += dx;
		y1 += dy;
		putpixel(x1, y1, RED);
	}


}

