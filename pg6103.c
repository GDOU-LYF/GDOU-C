#include<stdio.h>
void main()
{
    int score;
	printf("请输入学生的一门课成绩：\n");
    scanf("%d",&score);
	if(score<=100 &&score>=0){ 
		score=score/10;
		switch(score) { 			case 0:
			case 1:
			case 2:
			case 3:
			case 4: 
			case 5: 
				printf("成绩等级为：E\n");
				break;
			case 6: 
				printf("成绩等级为：D\n");
				break;
			case 7: 
				printf("成绩等级为：C\n");
				break;
			case 8: 
				printf("成绩等级为：B\n");
				break;
			case 9: 
			case 10: 
				printf("成绩等级为：A\n");
				break;
			default:
				printf("数据错误!"); 
		}
	}else{
		printf("数据错误!"); 
	} 

}
