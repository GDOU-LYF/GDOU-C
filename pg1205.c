#include <stdio.h>
#include <math.h>
void main(void)
{
	int x;
	void prime(int m);
	printf("以下是100以内的素数：\n");
	for (x=2;x<=100;x++)
		prime(x);
    printf("\n"); 
 
void prime(int m)
{
	int i,n,flag=1;
	n=sqrt(m);
	for (i=2;i<=n;i++){
		if (m%i==0)
			flag=0;
	}
	if(flag==1){
		printf("%6d",m);
	}
	return;
}
