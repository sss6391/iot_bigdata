#include <stdio.h>

void main(){
	int count=1;
	int total=0;

	for(;count<51;count++){
		total = total + 2*count;
	}
	printf("총 합은 %d 입니다", total);
}
