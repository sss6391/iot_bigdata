#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int available_money;
	int cream;	// 500
	int shrimp;	// 700
	int cola;	// 400
	int result;

	printf("�����ϴ� �ݾ��� �Է��ϼ���: ");
	scanf("%d", &available_money);

	for (cream = 1; (cream * 500) < available_money ; cream++) {
		for (shrimp = 1; (shrimp * 700) < available_money ; shrimp++) {
			for (cola = 1; (cola * 400) < available_money ; cola++) {
				result = (cream * 500) + (shrimp * 700) + (cola * 400);
				if (available_money - result == 0) {
					printf("ũ���� %d ��, ����� %d ��, �ݶ� %d��\n", cream, shrimp, cola);
				}
			}
		}
	}
}