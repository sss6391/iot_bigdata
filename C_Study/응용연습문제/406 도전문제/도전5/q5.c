#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)

void main() {
	int your_number;
	int computer_number;
	int win=0;
	int drew=0;
	int index;
	int rock = 1;
	int scissors = 2;
	int paper = 3;

	srand((int)time(NULL));

	while (1) {
		computer_number = rand() % 10;
		if (computer_number < 3) {
			printf("������ 1, ������ 2, ���� 3: ");
			scanf("%d", &your_number);
			if (computer_number + 1 == your_number) {
				printf("�����ϴ�\n");
				drew++;
				continue;
			}
			if (your_number == rock) {
				if (computer_number + 1 == scissors) {
					printf("����� �ָ� ����, ��ǻ�ʹ� ���� ����, �̰���ϴ�\n");
					win++;
					continue;
				}
				else if (computer_number + 1 == paper) {
					printf("����� �ָ� ����, ��ǻ�ʹ� �� ����, �����ϴ�\n");
					break;
				}
			}
			if (your_number == scissors) {
				if (computer_number + 1 == paper) {
					printf("����� ���� ����, ��ǻ�ʹ� �� ����, �̰���ϴ�\n");
					win++;
					continue;
				}
				else if (computer_number + 1 == rock) {
					printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�\n");
					break;
				}
			}
			if (your_number == paper) {
				if (computer_number + 1 == rock) {
					printf("����� �� ����, ��ǻ�ʹ� ���� ����, �̰���ϴ�\n");
					win++;
					continue;
				}
				else if (computer_number + 1 == scissors) {
					printf("����� �� ����, ��ǻ�ʹ� ���� ����, �����ϴ�\n");
					break;
				}
			}
		}
	}
	printf("\n������ ���: %d ��, %d ��\n", win, drew);
}