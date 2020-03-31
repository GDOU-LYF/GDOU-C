#include <stdio.h>
int main(){
	int a,b,c;
	c=(a=7,b=a+2,b+1);
	printf("a=%d,b=%d,c=%d",a,b,c);
	return 0;
} 
