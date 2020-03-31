#include <stdio.h>
int main(){
	int array[10];
	int i,max,min;
	scanf("%d",&array[0]);
	min=max=array[0];
	int data;
	for(i=1;i<10;i++){
		scanf("%d",&array[i]);
		data=array[i];
		if(data>max){
			max=data;
		}else if(data <min){
			min=data;
		}
	}
	printf("Ê£ÓàµÄÊı:");
	for(i=0;i<10;i++){
		data=array[i];
		if(data==max){
			max=-1;
		}else if(data==min){
			min=-1;
		}else{
			printf("%d ",data);
		}
}
	return 0;
}
