#include <stdio.h>

// my_sum �Լ��� ����ϱ� ���� my_head.h �ش������� include

#include "my_head.h"

// <[������ϸ�]>  <== <>�� ����ϴ� ���� ��������� PATH ȯ�溯����
// �ִ� ���
// "[������ϸ�]"  <== ""�� ����ϴ� ���� main�Լ��� �ִ� ������ ��������
// ����θ� ����ϴ� ���

void main() {
	int result;

	result =my_sum(3,4);

	printf("3+4= %d\n", result);
}
