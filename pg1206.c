#include <stdio.h>
#define PI 3.1415926
double d(double r);
double s(double r);
double v(double r);
void main(void)
{
	double r;
	printf("请输入圆的半径：");
	scanf("%lf",&r
 

	printf("半径为%.2f的圆周长为：%.2f\n",r,d(r));
	printf("半径为%.2f的圆面积为：%.2f\n",r,s(r));
	printf("半径为.2%f的球体积为：%.2f\n",r,v(r));
}

double d(double r){
	return 2*PI*r;
}
double s(double r){
	return PI*r*r;
}
double v(double r){
	return 4/3.0*PI*r*r*r;
}
