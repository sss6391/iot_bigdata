#include <stdio.h>
#pragma warning (disable:4996)

/*
 <화면출력>
 
  1번째 숫자를 입력하세요: 5
  2번째 숫자를 입력하세요: 9
  3번째 숫자를 입력하세요: 3
 
 1~3번째 숫자의 총합은 17입니다
*/

void main() {
/*	int number[];		임의로 만든 코드
	int limit;
	int index;
	int total=0;
*/

	int max_number=10;

	printf("입력 받을 숫자의 갯수를 입력하세요: ");
	scanf("%d", &max_number);

// 배열의 크기는 동적으로 정의할 수가 없다.
// 입력받은 변수 다음에 배열을 선언하는 것부터 ASCI 99 스타일이며
// 컴파일 에러를 발생시킨다.
// 따라서 배열의 크기는 처음부터 설계된 크기로 선언하고 사용하여야 한다.
// 이러한 한계는 포인터를 활용한 동적메모리 할당을 통해 해결할 수 있다.
//
	int	input_number[max_number];



/*	임의로 만든 코드
	for (index=0; index<limit;index++){
		printf("%d 번째 숫자를 입력하세요: ", index+1);
		scanf("%d", number[index]);
		total= total + number[index];
	}
	
	printf("%d ", total);
*/


}
