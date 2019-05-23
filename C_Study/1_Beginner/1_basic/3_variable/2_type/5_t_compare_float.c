#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	float my_pi = 3.141592;

	// FLOATING(실수형) 타입 (float, double, long double...) 변수를
	// '==' 연산자로 비교하는 것은 100% ture를 이끌어 낼 수 없다.
	// FLOATING 타입 변수는 값이 저장되는 것이 아니라 수식이
	// 저장되기 때문이다. P 90 참조
	
	if(my_pi == 3.141592){
		printf("Correct PI!");
	}

	printf("my_pi: %f\n", my_pi);
	printf("my_pi: %.10f\n", my_pi);
}
