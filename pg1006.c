#include <stdio.h>
int main(){
	int m,n;//m x n y
	int a[6][6];
	printf("number(2<=m<=6):");
	scanf("%d",&m);
	printf("number(2<=n<=6):");
	scanf("%d",&n);
	int i,j,ret;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			ret=ret+a[i][j];
		}
	}
	printf("·½ÕóÎª\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("ret(abs):%.1f",ret*1.0/(m*n));
	
	return 0;
}
