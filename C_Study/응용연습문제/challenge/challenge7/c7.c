#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int constant_n;
	int k = 0;
	int result = 1;

	printf("숫자를 입력하세요: ");
	scanf("%d", &constant_n);

	while(1){
		result = result * 2;
		if (result > constant_n) {
			break;
		}
		k++;
	}
	printf("입력된 상수 n: %d \n공식을 만족하는 최댓값은 %d", constant_n, k);
}