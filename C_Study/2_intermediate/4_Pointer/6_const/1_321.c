#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int num=20;
	int num2=30;
	const int * ptr=&num;

	*ptr=40;
	ptr=&num2;		// ptr�� �ּҰ� ������ ����
	num=40;			// ptr �ּҰ��� ����Ű�� ���� �����ϴ� ���� �Ұ���
}
