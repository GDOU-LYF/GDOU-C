#include <stdio.h>
char re();
int main(){
	re();
	return 0;
}

char re(){
	char c;
	if((c=getchar())!='\n'){
		re();
	}
	printf("%c",c);
	return c;
}
