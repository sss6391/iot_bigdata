#include <stdio.h>
// ��ø�� (Nested) While��
void main(){
	int current_times = 2;
	int muliplier=0;

	printf(" �������� ����!\n");
	/* 2 4 6 8 10 12 14 16 18
	 * .
	 * .
	 * 9 . . . . . . . . . 81
	 *  �������� �����͸� table ���·� ǥ���� �ڷᱸ���� ����.
	 *  �̷��� ������ ������ 2�� �ݺ������� ���� �ϴ� ���� ���� ȿ�����̴�.
	 *  ù��° while���� �������� ������ table�� ���� �����ϴ� ���̸�
	 *  �ι�° while���� �������� ������ table�� ���� �����ϴ� �����̴�.
	 */
	while(current_times<10){
		muliplier=1; // �� ���� �����ϴ� ������ �ʱ�ȭ

		printf("==== %d�� ====\n", current_times);
		while(muliplier<10){
			printf("%d * %d = %d \n", current_times, muliplier, current_times * muliplier);
			muliplier++; // ���� ���� �����ϱ� ���� ������ ����
		}
		printf("\n");
		current_times++; // ���� ���� �����ϱ� ���� ���� ����
	}
}
