#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char str[] = "�ȳ��ϼ���";
	int idx=0;

	printf("���� ���� ���: ");
	while(str[idx] != '\0'){
		// �ѱ��� 1byte �� �о� ���̴� ������ ��Ȳ�� ����
		// ������ �Ǵ� �پ��� ���·� ������ �߻� ��ų �� �ִ�.
		// �ѱ��� 1byte �� ó���ϴ� ��ĺ���
		// �ѱ��� �Է�. ������ �� �� �ִ� �����Լ���
		// ����ϴ� ���� �����ϴ�.
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
}
