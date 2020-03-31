#include <stdio.h>
int leapyear(int y);
int main(){
	int i;
	for(i=2000;i<=2200;i++){
		if(leapyear(i)){
			printf("%d\t",i);
		}
	}
	
	return 0;
}
int leapyear(int y){
	int ret=0;
	if((y%4==0&&y%100!=0)||y%400==0){
		ret=1;
	}
	return ret;
}
