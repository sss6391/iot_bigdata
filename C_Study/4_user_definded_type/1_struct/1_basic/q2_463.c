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
		printf("이름을 입력하세요: ");
		scanf("%s", em[index].name);

		printf("주민번호를 입력하세요: ");
		scanf("%s", em[index].pin);

		printf("급여정보를 입력하세요: ");
		scanf("%d", &em[index].salary);
		printf("\n");
	}

	for (index = 0; index < 3; index++){
		printf("\n이름: %s\n주민번호: %s\n급여정보: %d\n", em[index].name, em[index].pin, em[index].salary);
	}
}
