#include <stdio.h>

// ����Լ��� Ż���ϴ� ������ ��Ȯ���� ������
// �ý��� ��ü�� ���� ��ų �� ���� ��ŭ ������ �ڵ��̴�.
// Ư�� �Ӻ���� ���α׷������� ����� �����ϰ� �ִ�.
// ��� �Լ� ��� �ݺ����� ���Ͽ� ������ �ذ��ϴ� ���� �����ϴ�.

int Factorial(int n){
	if ( n == 0 ){
		return 1;
	}else{
		return n * Factorial(n-1);
	}
}

void main() {
	int count = 0;
	int target_number = 0;

	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &target_number);

	for(; count <= target_number; count++){
		printf("%d! = %d \n", target_number, Factorial(count) );
	}
}
