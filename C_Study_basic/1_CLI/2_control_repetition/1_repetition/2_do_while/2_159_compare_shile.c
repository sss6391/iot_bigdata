#include <stdio.h>

void main(){
	int multiplier=1;
	int times=2;
	printf("while���� ���\n");
	while (multiplier<10){
		printf("%d * %d = %d\n", times, multiplier, multiplier*times);
		multiplier++;
	}

	multiplier=1;
	times=2;
	printf("\ndo while���� ���\n");

	do{
		printf("%d * %d = %d\n", times, multiplier, multiplier*times);
		multiplier++;
	}while (multiplier<10);
}
