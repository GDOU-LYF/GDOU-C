#include<stdio.h>
main()
{
	int i,sum=0;
	for(i=1;i<=100;i++)
		if(i%3==0&&i%5!=0) sum=sum+i;
		printf("ºÍÎª£º%d\n",sum);
}

