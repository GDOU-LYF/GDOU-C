#include <stdio.h>
long fac(int n);
long sum(int x,int y);
void main(void)
{
	long fac(int n);
	long sum(int x,int y);
	int a,b;
	long c;
	printf("请输入两个整数，中间用逗号 隔：");
	scanf("%d,%d",&a,&b);
	c=sum(a,b);
	printf("两个整数阶乘之和为：%ld\n",c);
}
long sum(int x,int y)
{
	long z1,z2;
	z1=fac(x);
	z2=fac(y);
	return (z1+z2);
}
long fac(int n)
	{
		long r=1;
		int i;
		for (i=1;i<=n;i++)
			r*=i;
		return r;
	}
