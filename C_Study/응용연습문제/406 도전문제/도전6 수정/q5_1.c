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
	char string[3][7] = { "바위",  "가위",  "보" };

	srand((int)time(NULL));

	while (lose < 1) {
		computer_number = (rand() % 3) + 1;
		printf("바위는 1, 가위는 2, 보는 3: ");
		scanf("%d", &your_number);
		if (your_number < 1 || your_number > 3) {
			printf("\n %d 입력하셨습니다. 1 ~ 3만 입력하세요\n\n", your_number);
			continue;
		}
		if (computer_number == your_number) {
			printf("\n당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다\n\n", string[your_number - 1], string[computer_number - 1]);
			drew++;
		}
		else if (your_number + 1 == computer_number || your_number == 3 && computer_number == 1) {
			printf("\n당신은 %s 선택, 컴퓨터는 %s 선택, 이겼습니다\n\n", string[your_number - 1], string[computer_number - 1]);
			win++;
		}
		else {
			printf("\n당신은 %s 선택, 컴퓨터는 %s 선택, 졌습니다\n\n", string[your_number - 1], string[computer_number - 1]);
			lose++;
		}
	}
	printf("\n게임의 결과: %d 승, %d 무\n", win, drew);
}