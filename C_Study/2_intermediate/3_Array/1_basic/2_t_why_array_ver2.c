#include <stdio.h>
#pragma warning (disable:4996)

/* ȭ�� �䱸����

ù ��° ���ڸ� �Է��ϼ���: 1
�� ��° ���ڸ� �Է��ϼ���: 2
�� ��° ���ڸ� �Է��ϼ���: 3
�� ��° ���ڸ� �Է��ϼ���: 4
�ټ� ��° ���ڸ� �Է��ϼ���: 5
�Է��� ����(�Է� ������� ����): 1 2 3 4 5
����: 15, ���: 3
�� ��° ���ڴ� 3 �Դϴ�.*
*/

void main() {
	int number, total=0, average, index;
	int max_count=5;
	
	for(index=0; index < max_count; index++){
		printf("%d ��° ���ڸ� �Է��ϼ���: ", index+1);
		scanf("%d", &number);
		total = total + number;
	}

/* �Ʒ� ȭ�� ��� �䱸������ �⺻ ��Ĵ�� �� ��� �����ϱⰡ �����
	printf("�Է��� ����(�Է� ������� ����): %d %d %d %d %d\n",
				   					number1, number2, number3, number4, number5);
�Է��� ����(�Է� ������� ����): 1 2 3 4 5
*/
	
	average= total/max_count;
	printf("����: %d, ���: %d\n", total, average);

/* �Ʒ� ȭ�� ��� �䱸������ �⺻ ��Ĵ�� �� ��� �����ϱⰡ �����
�� ��° ���ڴ� 3 �Դϴ�.*
	printf("�� ��° ���ڴ� %d �Դϴ�.", number3);
*/
}
