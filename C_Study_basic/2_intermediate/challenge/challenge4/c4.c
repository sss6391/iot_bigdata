#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int available_money;
	int cream;	// 500
	int shrimp;	// 700
	int cola;	// 400
	int result;

	printf("소유하는 금액을 입력하세요: ");
	scanf("%d", &available_money);

	for (cream = 1; (cream * 500) < available_money ; cream++) {
		for (shrimp = 1; (shrimp * 700) < available_money ; shrimp++) {
			for (cola = 1; (cola * 400) < available_money ; cola++) {
				result = (cream * 500) + (shrimp * 700) + (cola * 400);
				if (available_money - result == 0) {
					printf("크림빵 %d 개, 새우깡 %d 개, 콜라 %d개\n", cream, shrimp, cola);
				}
			}
		}
	}
}