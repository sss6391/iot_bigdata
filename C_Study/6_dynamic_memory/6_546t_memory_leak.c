#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

void execute_dynamic_malloc(){
	int input_number;
	int i;
	int total = 0;
	int* ptr;
	
	printf("전체 입력개수를 설정하세요: ");
	scanf("%d", &input_number);
	
	ptr = (int*)malloc(sizeof(int) * input_number);

	for (i = 0; i < input_number; i++) {
		printf("%d] 수를 입력하세요: ", i + 1);
		scanf("%d", &ptr[i]);
		total = total + ptr[i];
	}

	for (i = 0; i < input_number; i++) {
		printf("입력%d] %d\n", i + 1, ptr[i]);
	}
	printf("총합: %d\n", total);

//	free(ptr);

	// ptr 에 대한 메모리 반환을 하지 않는다면 할당되었던 메모리는
	// 영구적으로 접근이 불가능한 메모리 영역으로 남게 된다.
	// 이러한 현상을 memory leak이라고 한다.
	// 따라서 할당된 메모리는 반드시 프로그램 종료 전에 free해야 한다.
}

void main() {
	int menu;

	while (1) {
		puts("동적 메모리 할당을 체험합시다.");
		puts("1. 예제 실행");
		puts("2. 종료");
		printf("메뉴를 선택하세요: ");
		scanf("%d", &menu);

		switch (menu) {
		case 1:
			execute_dynamic_malloc();
			break;
		case 2:
			return;
		default:
			puts("1, 2 메뉴만 선택하세요.");
		}
	}
}
