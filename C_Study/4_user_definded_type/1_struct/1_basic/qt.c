#include <stdio.h>
#pragma warning (disable:4996)

typedef struct student{
	char name[20];
	int score;
}Student;

void main() {
	Student st[100];
	int index=0;
	int max_counter;
	int total=0;
	int mean=0;
	Student *top;
	Student *low;

	for (max_counter = 0; ;max_counter++) {
		printf("�̸��� �Է��ϼ���(���� �Է½� �����): ");
		scanf("%s", st[max_counter].name);
	
		if (!(strcmp(st[max_counter].name, "����"))) {
			break;
		}

		printf("������ �Է��ϼ���: ");
		scanf("%d", &st[max_counter].score);
		printf("\n");
	}

	while (index < max_counter) {
		total = total + st[index].score;
		index++;
	}
	mean = total / max_counter;
	
	top = &st[0];
	low = &st[0];
	for (index = 0; index < max_counter; index++) {
		if ((*top).score < st[index].score) {
			top = &st[index];
		}if ((*low).score > st[index].score) {
			low = &st[index];
		}
	}

	printf("* �л���: %d��\n", max_counter);
	printf("* ���: %d��\n", mean);
	printf("* ����\n");
	printf(" - %s\n", top->name);
	printf("* ������\n");
	printf(" - %s", low->name);
}
