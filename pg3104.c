#include "stdio.h"
main()
{
   int a,b,c,max;
   printf("请输入两个数a,b,c(以逗号分隔): ");
   scanf("%d,%d,%d",&a,&b,&c);
   max=(a>b?a>c?a:c:b>c?b:c);
   printf("max=%d\n",m );
   printf("\n");
}
