#include <stdio.h>
#include <math.h>
double dist(int x1,int y1,int x2,int y2);
int main(){
	int x1,x2,y1,y2;
	scanf("%d,%d",&x1,&y1);
	scanf("%d,%d",&x2,&y2);
	printf("r=%.2f",dist(x1,y1,x2,y2));
	
}
double dist(int x1,int y1,int x2,int y2){
	int dx,dy;
	dx=x1-x2;
	dy=y1-y2;
	return sqrt(dx*dx+dy*dy);
}
