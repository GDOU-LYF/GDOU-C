#include<stdio.h>
void main()
{
	int i,n,salary,max;
	printf("please input number of staff\n");
	scanf("%d",&n);
	printf("Enter %d salaries :\n",n);
	scanf("%d",&salary);
	ma	 salary;
	int min=salary;
	int ret=salary;
	for(i=1;i<n;i++)
	{
		scanf("%d",&salary);
		if(max<salary)
			max=salary;
		if(min>salary)
			min=salary;
		ret=ret+salary;
	}
	printf("The max salary of staff is : %d\n",max);
	printf("The min salary of staff is : %d\n",min);
	printf("The t salary of staff is : %.0f\n",ret/n*1.0);
}
