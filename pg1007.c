#include <stdio.h>
#define N 9+1
int main(){
	int i,j;
	int a[N][N]={0,};
	for (i=0;i<N;i++){
		a[0][i]=i;
		for(j=0;j<N;j++){
			if(j==0){
				a[i][j]=i;	
			}else{
			a[i][j]=a[i][0]*j;
			}
		}
	}
	for (i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(i==0 &&j==0){
				printf("*\t");
			}else if (a[0][j]<=i ||i==0){
				printf("%d\t",a[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
