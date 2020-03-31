#include <stdio.h>
int square(int x,int y,int z);
double sub(int a,int b,int c);
void main(void)
{
	int a,b,c;
	printf("请输入三个整数，中间用逗号分隔：");
	scanf("%d,%d,%d",&a,&b,&c);
	double ret;
	ret=sub(a,b,c);
	printf("%d、%d、%d三个整数平方之和与平均值之间的差值为：%.2f\n",a,b,c,ret);
}
double sub(int a,int b,int c){
	double ave,s;
	ave=(a+b+c)/3.0;
	s=(double)square(a,b,c)-ave;
	return s;
}
int square(int x,int y,int z)
{
	int m;
	m=x*x+y*y+z*z;
	return m;
}
