#include <stdio.h>
#pragma warning (disable:4996)

struct employee{
	char name[20];
	char pin[20];
	int salary;
};

void main() {
	struct employee em[3];
	int index;

	for (index = 0; index < 3; index++) {
		printf("�̸��� �Է��ϼ���: ");
		scanf("%s", em[index].name);

		printf("�ֹι�ȣ�� �Է��ϼ���: ");
		scanf("%s", em[index].pin);

		printf("�޿������� �Է��ϼ���: ");
		scanf("%d", &em[index].salary);
		printf("\n");
	}

	for (index = 0; index < 3; index++){
		printf("\n�̸�: %s\n�ֹι�ȣ: %s\n�޿�����: %d\n", em[index].name, em[index].pin, em[index].salary);
	}
}
