#include <stdio.h>
int square(int x,int y,int z);
double sub(int a,int b,int c);
void main(void)
{
	int a,b,c;
	printf("�����������������м��ö��ŷָ���");
	scanf("%d,%d,%d",&a,&b,&c);
	double ret;
	ret=sub(a,b,c);
	printf("%d��%d��%d��������ƽ��֮����ƽ��ֵ֮��Ĳ�ֵΪ��%.2f\n",a,b,c,ret);
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
