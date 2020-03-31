#include <stdio.h>
int main(){
	char a;
	while((a=getchar())!='@'){
		if(a>='A'&&a<='Z'){
			a=a+32;
		}
		if(a=='z'){
			a='a';
		}else if(a>='a'&&a<='z'){
			a=a+1;
		}
		putchar(a);
	}
	return 0;
}
