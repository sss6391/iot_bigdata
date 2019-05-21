#include <stdio.h>
#pragma warning (disable:4996)

// ***배열의 인덱스는 0부터 시작한다***

void main() {
	int number[5], total=0, average, index;
	const int max_count=5;
	
	for(index=0; index < max_count; index++){
		printf("%d 번째 숫자를 입력하세요: ", index+1);
		scanf("%d", &number[index]);
		total = total + number[index];
	}
	printf("입력한 숫자(입력 순서대로 정렬): ");

	for(index=0; index < max_count; index++){
		printf("%d ", number[index]);
	}

	average= total/max_count;
	printf("\n총합: %d, 평균: %d\n", total, average);
	printf("%d 번째 숫자는 %d 입니다.\n",3, number[2]);

	printf("다시 조회하고 싶은 수의 순서를 입력하세요: ");
	scanf("%d", &index);
	printf("%d 번째 숫자는 %d 입니다.",index, number[index-1]);

}
