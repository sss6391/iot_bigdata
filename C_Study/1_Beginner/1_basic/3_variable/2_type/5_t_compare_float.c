#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	float my_pi = 3.141592;

	// FLOATING(�Ǽ���) Ÿ�� (float, double, long double...) ������
	// '==' �����ڷ� ���ϴ� ���� 100% ture�� �̲��� �� �� ����.
	// FLOATING Ÿ�� ������ ���� ����Ǵ� ���� �ƴ϶� ������
	// ����Ǳ� �����̴�. P 90 ����
	
	if(my_pi == 3.141592){
		printf("Correct PI!");
	}

	printf("my_pi: %f\n", my_pi);
	printf("my_pi: %.10f\n", my_pi);
}
