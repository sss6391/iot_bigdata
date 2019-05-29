#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int num=20;
	int num2=30;
	const int * ptr=&num;

	*ptr=40;
	ptr=&num2;		// ptr의 주소값 변경은 가능
	num=40;			// ptr 주소값이 가리키는 값을 변경하는 것은 불가능
}
