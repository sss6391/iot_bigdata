#include <stdio.h>

void main(){
	int num1=1;
	int num2=0;
	int result=0;

	for(;num1<9;num1++){
		for(num2=1;num2<9;num2++){	
			result = ((num1*10)+num2) + ((num2*10)+num1);
			if(result == 99){
				printf(" 	 %d%d\n", num1, num2);
				printf("	+%d%d\n", num2, num1);
				printf("	-----\n", num2, num1);
				printf("	 %d\n\n", result);
			}
		 	if(num2>9){
				break;
			}
		}
	}
}
