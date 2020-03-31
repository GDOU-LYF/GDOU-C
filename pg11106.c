#include <stdio.h>
#include <string.h>
int main(){
	char s[80],ret[80];
	int i=0,j=0;
	while((s[i]=getchar())!='\n'){
		if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z')){
			ret[j++]=s[i]; 
		}
		i++;
	}
	ret[j]="\0";
	puts(ret); 
	return 0;
}
