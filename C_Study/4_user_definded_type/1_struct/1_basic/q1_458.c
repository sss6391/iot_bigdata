#include <stdio.h>
#pragma warning (disable:4996)

struct employee {
	char name[20];
	char pin[20];
	int salary;
};

void main() {
	struct employee em;

	printf("�̸��� �Է��ϼ���: ");
	scanf("%s", em.name);

	printf("�ֹι�ȣ�� �Է��ϼ���: ");
	scanf("%s", em.pin);

	printf("�޿������� �Է��ϼ���: ");
	scanf("%d", &em.salary);
	
	printf("\n�̸�: %s\n�ֹι�ȣ: %s\n�޿�����: %d", em.name, em.pin, em.salary);
}
