#include <stdio.h>

void main(){
	int num1=1;
	int num2=0;
	int result=0;

	for(num1=1;num1<9;num1++){
		if(num1%2 != 0)
			continue;
		printf("\n=== %d´Ü ===\n",num1);
		num2 = 1;
		for(;num2 <= num1;num2++){
			result = num1 * num2;
			printf("%d * %d = %d\n", num1, num2, result);
		}
	}
}
