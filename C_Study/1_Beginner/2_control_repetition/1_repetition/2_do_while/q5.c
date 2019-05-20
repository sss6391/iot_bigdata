#include <stdio.h>

void main(){
	int current_times = 2;
	int muliplier=0;

	printf("구구단을 외자!\n");
	do{
		muliplier=1; 
		do{
			printf("%d * %d = %d \n", current_times, muliplier, current_times * muliplier);
		muliplier++;
		}while(muliplier<10);
		printf("\n");
		current_times++;
	}while(current_times<10);

}
