#include <stdio.h>
int main(){
	int x,y;
	scanf("%d",&x);
	if(-5<x && x<=0){
		y=x;
	}else if(0<x && x<=5){
		y=x-1;
	}else if(5<x &&x<=10){
		y=x+1;
	}
	printf("x=%d,y=%d",x,y);
	return 0;
}
