#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char str[6];
	int idx=0;

	// char�� 1byte �ѱ��� 2byte ���� �Ʒ� �ڵ尡 ������ ���� �ʴ´�.
	// �����Ϸ��� ���� �پ��� ������ �߻��� �� �ִ�.
	str[0] = '��';
	
	printf("�Է� ���� ���ڿ�: %s \n", str);

	/*
	printf("���� ���� ���: ");
	while(str[idx] != '\0'){
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
	*/
}
