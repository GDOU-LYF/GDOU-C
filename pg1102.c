#include<stdio.h>
#include <string.h> 
void main(void)
{
	char str1[20],str2[20],str3[20],strmax[20];
	printf("������3���ַ�����\n");
	scanf("%s%s%s",str1,str2,str3);
	if(strc (str1,str2))
		strcpy(strmax,str1);
		//strmax=str1;
	else 
		strcpy(strmax,str2);
	if(strcmp(str3,strmax))
		strcpy(strmax,str3);
	printf("�����ַ���Ϊ��%s\n",strmax);
}
