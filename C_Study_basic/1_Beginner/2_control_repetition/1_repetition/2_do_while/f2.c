#include <stdio.h>
void main(){
	int star = 0;
	int o = 0;
	
	for(;star<5;star++){
		o = 0;
		for(;o<star;o++){
			printf("o");
		}
		printf("*\n");
	}
}
