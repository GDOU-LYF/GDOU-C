#include <stdio.h>
float average(int x,int y,int z);
int square(int x,int y,int z);
void main(void)
{
	int a,b,c;
	float ave,s;
	printf("请输入三个整数，中间用逗号分隔：");
	 anf("%d,%d,%d",&a,&b,&c);
	ave=average(a,b,c);
	s=square(a,b,c)-ave;
	printf("%d、%d、%d三个整数平方之和与平均值之间的差值为：%.2f\n",a,b,c,s);
}
int square(int x,int y,int z)
{
	int m;
	m=x*x+y*y+z*z;
	return m;
}

float average(int x,int y,int z){
	float ret;
	ret=(x+y+z)/3.0;
	return ret;
}
