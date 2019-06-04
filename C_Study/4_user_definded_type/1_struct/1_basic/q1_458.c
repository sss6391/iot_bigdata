#include <stdio.h>
#pragma warning (disable:4996)

struct employee {
	char name[20];
	char pin[20];
	int salary;
};

void main() {
	struct employee em;

	printf("이름을 입력하세요: ");
	scanf("%s", em.name);

	printf("주민번호를 입력하세요: ");
	scanf("%s", em.pin);

	printf("급여정보를 입력하세요: ");
	scanf("%d", &em.salary);
	
	printf("\n이름: %s\n주민번호: %s\n급여정보: %d", em.name, em.pin, em.salary);
}
