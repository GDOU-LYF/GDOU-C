#include <stdio.h>
void main(void)
{
	int a,b,c,d;
	int max(int x,int y,int z);
	printf("请输入两个整数，中间用逗号分隔：");
	scanf("%d,%d,%d",&a,&b,&c);
	d=max(a,b,c);
	prin ("%d,%d和%d的最大值为：%d\n",a,b,c,d);
}
int max(int x,int y,int z)
{
	int ret;
	if (x>y){
		if(x>z){
		 	ret=x;	
		}else{
			ret=z;
		}
	}
	else{
		if(y>z){
		 	ret=y;	
		}else{
			ret=z;
		}
	}
	return ret;
}
