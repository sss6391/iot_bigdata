#include <stdio.h>
#pragma warning (disable:4996)

int SumOfSquare() {
	int number;
	int sumOfsqare = 0;

	for (number = 1; number < 11; number++) {
		sumOfsqare = sumOfsqare + (number * number);
	}
	printf("������ �� %d\n", sumOfsqare);
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
	printf("���� ���� %d\n", squareOfsum);
	return squareOfsum;
}

void main() {
	int different;

	printf("1���� 10������ ���̴� %d �Դϴ�", SquareOfSum() - SumOfSquare() );
}