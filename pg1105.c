#include <stdio.h>
int main(){
	char s[80];
	int i=0;
	while((s[i]=getchar())!='\n'){
		i++;
	}
	for(;i!=-1;i--){
		printf("%c",s[i]);
	}
	
	
	return 0;
}
