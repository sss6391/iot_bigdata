#include <stdio.h>
#pragma warning (disable:4996)

int SumOfSquare() {
	int number;
	int sumOfsqare = 0;

	for (number = 1; number < 11; number++) {
		sumOfsqare = sumOfsqare + (number * number);
	}
	printf("제곱의 합 %d\n", sumOfsqare);
	return sumOfsqare;
}

int SquareOfSum() {
	int number;
	int total = 0;
	int squareOfsum;

	for (number = 1; number < 11; number++) {
		total = total + number;
	}
	squareOfsum = (total * total);
	printf("합의 제곱 %d\n", squareOfsum);
	return squareOfsum;
}

void main() {
	int different;

	printf("1부터 10까지의 차이는 %d 입니다", SquareOfSum() - SumOfSquare() );
}