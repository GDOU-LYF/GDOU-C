#include <stdio.h>
#include <math.h>
int main(){
	int d,o,i;
	scanf("%d",&d);
	for(i=0;i<3;i++){
		o=o+(d%8)*pow(10,i);
		d=d/8;
	}
	printf("%d",o);
	return 0;
}
