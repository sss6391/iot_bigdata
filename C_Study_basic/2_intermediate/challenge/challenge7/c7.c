#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int constant_n;
	int k = 0;
	int result = 1;

	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &constant_n);

	while(1){
		result = result * 2;
		if (result > constant_n) {
			break;
		}
		k++;
	}
	printf("�Էµ� ��� n: %d \n������ �����ϴ� �ִ��� %d", constant_n, k);
}