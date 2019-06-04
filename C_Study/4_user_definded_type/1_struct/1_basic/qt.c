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
		printf("이름을 입력하세요(종료 입력시 종료됨): ");
		scanf("%s", st[max_counter].name);
	
		if (!(strcmp(st[max_counter].name, "종료"))) {
			break;
		}

		printf("점수를 입력하세요: ");
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

	printf("* 학생수: %d명\n", max_counter);
	printf("* 평균: %d점\n", mean);
	printf("* 수석\n");
	printf(" - %s\n", top->name);
	printf("* 최저점\n");
	printf(" - %s", low->name);
}
