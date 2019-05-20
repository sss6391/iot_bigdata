#include <stdio.h>

void main(){
	int total=0;
	int num=1;

	do{
		total = total + 2*num;
		num++;
	}while(num<51);
	
	printf("гу╟Х: %d \n", total);
}
