#include <stdio.h>
#pragma warning (disable:4996)

// ***�迭�� �ε����� 0���� �����Ѵ�***

void main() {
	int number[5], total=0, average, index;
	const int max_count=5;
	
	for(index=0; index < max_count; index++){
		printf("%d ��° ���ڸ� �Է��ϼ���: ", index+1);
		scanf("%d", &number[index]);
		total = total + number[index];
	}
	printf("�Է��� ����(�Է� ������� ����): ");

	for(index=0; index < max_count; index++){
		printf("%d ", number[index]);
	}

	average= total/max_count;
	printf("\n����: %d, ���: %d\n", total, average);
	printf("%d ��° ���ڴ� %d �Դϴ�.\n",3, number[2]);

	printf("�ٽ� ��ȸ�ϰ� ���� ���� ������ �Է��ϼ���: ");
	scanf("%d", &index);
	printf("%d ��° ���ڴ� %d �Դϴ�.",index, number[index-1]);

}
