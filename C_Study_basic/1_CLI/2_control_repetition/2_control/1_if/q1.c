#include <stdio.h>

void main(){
	int num=0;

	for(;num<101;num++){
		if (num%7==0){
			printf("%d ",num);
		}else if(num%9==0){
			printf("%d ",num);
		}
	}
}
