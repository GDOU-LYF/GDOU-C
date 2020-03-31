#include <stdio.h>
int fabonacci(int n);
int main(){
	int n;
	scanf("%d",&n);
	printf("\n");
	int i;
	for(i=1;i<=n;i++){
		printf("%4d\t",fabonacci(i));
		if(i%5==0){
			printf("\n");
		}
	}
	
	
	return 0;
}

int fabonacci(int n){
	int ret=0;
	if(n==1 ||n==2){
		ret=1;
	}else{
		ret=fabonacci(n-2)+fabonacci(n-1);
	}
	return ret;
}
