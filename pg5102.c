#include<stdio.h>
void main()
{
	int x,y;
	printf("请输入x的值：");  
	scanf("%d",&x);
	if(-2<=x &&x<=2)
		y=10;
	else
		y=0;
	printf("y的值为%d\n",y);
}
