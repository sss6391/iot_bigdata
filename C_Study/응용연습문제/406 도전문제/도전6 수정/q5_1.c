#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)

void main() {
	int your_number;
	int computer_number;
	int win = 0;
	int drew = 0;
	int lose = 0;
	int index;
	char string[3][7] = { "����",  "����",  "��" };

	srand((int)time(NULL));

	while (lose < 1) {
		computer_number = (rand() % 3) + 1;
		printf("������ 1, ������ 2, ���� 3: ");
		scanf("%d", &your_number);
		if (your_number < 1 || your_number > 3) {
			printf("\n %d �Է��ϼ̽��ϴ�. 1 ~ 3�� �Է��ϼ���\n\n", your_number);
			continue;
		}
		if (computer_number == your_number) {
			printf("\n����� %s ����, ��ǻ�ʹ� %s ����, �����ϴ�\n\n", string[your_number - 1], string[computer_number - 1]);
			drew++;
		}
		else if (your_number + 1 == computer_number || your_number == 3 && computer_number == 1) {
			printf("\n����� %s ����, ��ǻ�ʹ� %s ����, �̰���ϴ�\n\n", string[your_number - 1], string[computer_number - 1]);
			win++;
		}
		else {
			printf("\n����� %s ����, ��ǻ�ʹ� %s ����, �����ϴ�\n\n", string[your_number - 1], string[computer_number - 1]);
			lose++;
		}
	}
	printf("\n������ ���: %d ��, %d ��\n", win, drew);
}