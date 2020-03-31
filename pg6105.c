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
		printf("这是一个等边三角形"); 
	}else if(a==b ||a==c){
		printf(a*2>max?"这是一个等腰三角形":"这不是三角形"); 
	} else if(a+b>c && a+c>b && b+c>a){
		printf("这是一般三角形"); 
	} else{
		printf("这不是三角形"); 
	} 
	return 0;
}
