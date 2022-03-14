#include<bits/stdc++.h>
#include<graphics.h>

void translate( int P[][2], int T[])
{
	printf("Original Line : (%d, %d) and (%d, %d)",P[0][0],P[0][1],P[1][0],P[1][1]);
	setcolor (2);
    rectangle (P[0][0], P[0][1], P[1][0], P[1][1]);
	P[0][0] = P[0][0] + T[0];
    P[0][1] = P[0][1] + T[1];
    P[1][0] = P[1][0] + T[0];
    P[1][1] = P[1][1] + T[1];
 
	printf("\nTranslated Coordinates : (%d, %d) and (%d, %d)",P[0][0],P[0][1],P[1][0],P[1][1]);
	setcolor (1);
    rectangle (P[0][0], P[0][1], P[1][0], P[1][1]);
}

int main()
{
	int gd = DETECT, gm;
	initgraph (&gd, &gm, "");
	int P[2][2] = {5, 8, 60, 80}; 
	int T[] = {5, 10}; // translation factor
	translate (P, T);
	getch();
	return 0;
}

