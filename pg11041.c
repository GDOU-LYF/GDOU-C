#include <stdio.h>
#include <string.h>
int main(){
	char s[80];
	int i=0;
	int a,b,c;
	a=b=c=0;
	while((s[i]=getchar())!='\n'){
		if(s[i]>='A' && s[i]<='Z'){
			a++;
		}else if(s[i]>='a' && s[i]<='z'){
			a++;		
		}else if(s[i]>='0' && s[i]<='9'){
			b++;
		}else{
			c++;
		}
		i++;
	}
	
	printf("a=%d,b=%d,c=%d",a,b,c);
	return 0;
	
}
