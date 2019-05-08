#include <stdio.h>

void main(){
	int input_left_x;
	int input_left_y;
	int input_right_x;
	int input_right_y;
	int result;

	printf("좌 상단의 x, y값을 입력하세요 ex)2 4 : ");
	scanf("%d %d", &input_left_x, &input_left_y);
	
	printf("우 상단의 x, y값을 입력하세요 ex)5 9 : ");
	scanf("%d %d", &input_right_x, &input_right_y);

	result=(input_right_x-input_left_x)*(input_right_y-input_left_y);
	printf("두 점이 이루는 직사각형의 넓이는 %d입니다",result);
}
