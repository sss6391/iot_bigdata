#include <stdio.h>
#pragma warning (disable:4996)

void SoSimpleFunc(void) {
	printf("I'm so simple");
}

void main() {
	int num = 20;
	void* ptr;

	ptr = &num;
	printf("%p \n",ptr);
	
	// �Ʒ� �ڵ�� �����Ͻ� ������ �߻��Ѵ�.
	// pointer to void Ÿ���� ���� �����޸𸮿� ���� ���ȴ�.
	//printf("num: %d\n", *ptr);
		
	ptr = SoSimpleFunc;
	printf("%p \n",ptr);
}

