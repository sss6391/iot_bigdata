#include <stdio.h>
#pragma warning (disable:4996)

void accumulate_daily_income(int daily_income) {
	static int total_profit = 0;
	total_profit = total_profit + daily_income;
	
	printf("���� ���� �ݾ�: %d \n", total_profit);
}

void main() {
	int daily_income = 0;

	while (1) {
		printf("���ͱ��� �Է��ϼ��� (����=>0): ");
		scanf("%d", &daily_income);

		if (daily_income == 0) {
			break;
		}
		printf("���� %d�� �Ա��߽��ϴ�.\n", daily_income);

		accumulate_daily_income(daily_income);
	}
}