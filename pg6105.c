#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int max=c;
	if(a>b){
		if(a>c){
			max=a;
		}
	}else{
		if(b>c){
			max=b;
		}
	}
	if(a==b &&a==c){
		printf("����һ���ȱ�������"); 
	}else if(a==b ||a==c){
		printf(a*2>max?"����һ������������":"�ⲻ��������"); 
	} else if(a+b>c && a+c>b && b+c>a){
		printf("����һ��������"); 
	} else{
		printf("�ⲻ��������"); 
	} 
	return 0;
}
