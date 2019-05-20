#include <stdio.h>
void main(){
	int star = 0;
	int o = 0;

	while(star<5){
		o = 0;

		while(o<star){
			printf("o");
			o++;
		}

		printf("*\n");
		star++;
	}
}
