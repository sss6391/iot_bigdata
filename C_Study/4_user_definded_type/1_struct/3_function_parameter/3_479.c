#include <stdio.h>
#pragma warning (disable:4996)

typedef struct person {
	char name[20];
	char phone[20];
	int age;
} Person;

void ShowPersonInfo(Person man) {
	printf("name: %s\n", man.name);
	printf("phone: %s\n", man.phone);
	printf("age: %d\n", man.age);
}

// �Լ��� �⺻������ �Ѱ��� ���� ������ �� �ִ�.
// ������ �Ʒ��� ���� ����ü�� ����Ѵٸ� ����ü�� �ɹ��� Ȱ���Ͽ�
// �������� 2�� �̻��� ���� ���Ͽ� ������ �����ϴ�.

Person ReadPersonInfo() {
	Person man;
	printf("name? "); scanf("%s", man.name);
	printf("phone? "); scanf("%s", man.phone);
	printf("age? "); scanf("%d", &man.age);
	return man;
}

void main() {
	
	// ����ü�� ���ؼ��� ���� struct ���� ���Ͽ� C���� �����ϴ� ��� 
	// �⺻���� ���� ���� ������ �����ϰ� �ִ�.

	Person man = ReadPersonInfo();
	ShowPersonInfo(man);
}
