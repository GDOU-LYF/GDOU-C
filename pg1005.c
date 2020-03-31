#include <stdio.h>
int main(){
	int n,a[6][6];
	printf("number(2<=n<=6):");
	scanf("%d",&n);
	int i,j,ret;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			if(i==j){
				ret=ret+a[i][j];
			}
		}
	}
	printf("·½ÕóÎª\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("ret(add):%d",ret);
	
	return 0;
}
