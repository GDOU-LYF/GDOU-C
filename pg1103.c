#include <stdio.h>
#include <string.h>
void main(void)
{
	int i,j;
	char s[5][20],temp[20];
	printf("������5���ַ�����\n");
	for(i=0; i<5; i++)
		gets(s[i]);
	printf("��5��� ���Ϊ��\n");
	for(i=1; i<5; i++){
		for(j=0;j<5-i;j++){
			if(strcmp(s[j],s[j+1])>0){
				strcpy(temp,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],temp);
			}
		}
	}	
	for(i=0;i<5;i++){
		puts(s[i]);
	}
}
