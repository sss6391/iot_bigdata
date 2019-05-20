#include <stdio.h>

void main(){
	int total=0;
	int i, num;

	printf("0부터 num가지의 덧셈, num은? ");
	scanf("%d", &num);

	for(i=0; i<num+1; i++){
		total+=i;
	}
	printf("0부터 %d가지의 덧셈 결과: %d \n", num, total);
}
