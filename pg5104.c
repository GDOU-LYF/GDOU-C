#include<stdio.h>
#include <math.h> 
int main(){
	int n,ret;
	scanf("%d",&n);
	int temp=n,i=0,max=1;
	while(n!=0){
		ret=ret*10+n%10;
		n=n/10;
		max*=10;
		i++;
	}
	for(- >0;i--){
		max/=10;
		printf("%d",(temp/max)%10);
		if(i!=1){
			printf(",");
		}
	}
	printf("\n%d",ret); 
	return 0;
} 

















