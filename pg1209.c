#include <stdio.h>
int is(int n);
int pow3(int x);
int main(){
	int i;
	for(i=1;i<=1000;i++){
		if(is(i)){
			printf("%d\t",i);
		}
	}
	return 0;
}

int is(int n){
	int Sum=0,temp=n;
	int i;
	for(i=0;temp!=0;i++){
		Sum=Sum+pow3(temp%10);
		temp/=10;
	}
	return n==Sum;
}

int pow3(int x){
	return x*x*x;
}
