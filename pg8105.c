#include <stdio.h>
int main(){
	int i,j,k;
	int n=0;
	for (i=1;i<=20;i++){//5
		for (j=1;j<=50;j++){//2
			for(k=1;k<=100;k++){//1
				if(i*5+j*2+k*1==100) {
					printf("一分:%2d,二分:%2d,五分:%2d\n",k,j,i);
					n++;
				}
			}
		}
	}
	printf("总共:%d\n",n);
	return 0;
}
