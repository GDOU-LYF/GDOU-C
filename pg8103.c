#include<stdio.h>
#include <math.h>
void main()
{
	int i,j,ret=0,x=2;
	int n=0;
	int This;
	for(i=200;i<300;i++){
		This=1;
		for(j=2;j<=sqrt(x*1.0);j++)
		{
			if(i%j==0)  //这数不是素数 
				This=0;
				break;
			}
		}
		if(This==1){
			ret=ret+i;
			printf("%d ",i);
			n++;
		}
		x++;
	}
	printf("\n%d\n",ret/n);
}
