#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

void main() {
	char str1[30] = "First~";
	char str2[30] = "Second";

	char str3[10] = "First~";
	char str4[10] = "Second";
	
//	strcat(str1, str2);
//	printf("%s", str1);

//	strcat(str1, str2); �� return ���� str1
//	printf("%s", strcat(str1,str2));
// strcat�� �� ��쿡�� ���� ���ڿ��� ũ�Ⱑ �ٿ��������� ���ڿ���
// ������ �� �ִ� ������� �Ѵ�.
// �׷��� ������ ���� ���ڿ� �迭�� ũ�⸦ �Ѿ�� ������
// ��Ÿ�� ������ �߻��Ѵ�

	strcat(str3, str4);
	printf("%s", str3);
}
