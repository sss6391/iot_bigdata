#include <stdio.h>
#pragma warning (disable:4996)

void Add(int val);
int num;	// Global Variable (��������)�� �⺻0���� �ʱ�ȭ ��

void main() {
	// ���� ������ ��𿡼����� (Scope�� �������) ������ �����ϴ�.
	printf("num: %d\n", num);
	Add(3);
	printf("num: %d\n", num);
	num++;	// ��������  num�� �� 1����
	printf("num: %d\n", num);
}

void Add(int val) {
	num += val;
}