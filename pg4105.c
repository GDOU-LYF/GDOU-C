#include <stdio.h>
int main(){
	char c;
	c=getchar();
	printf("ASCII:%d\n",c);
	if(c>'A'&& c<'Z'){
		printf("%c ASCII:%d",c+32,c+32);
	}else{
		printf("%c ASCII:%d",c-32,c-32);
	}
	return 0;
}
