#include <stdio.h>

void main(){
 int number1;
 int number2;
 int result;
 	for (number1=1;number1<10;number1++){
		for(number2=1;number2<10;number2++){
			result=number1*number2;
			printf("%d * %d = %d\n",number1,number2,result);
		}
	}

}
