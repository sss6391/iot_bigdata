// ���տ����� (compound assignment operator)

#include <stdio.h>

void main(){
	int accumulated_total=0;
// int 5_1_total=0, 5_2_total; ������ ������ ���ϱ� ���� �������� ���ʿ��� ����
	int num1=2, num2=4, num3=6;

	printf("�������� 5�� �� ����: %d\n", accumulated_total);

	accumulated_total=accumulated_total+10000;
	printf("5�� 1�� �������� 5�� �� ����: %d\n", accumulated_total);

	accumulated_total=accumulated_total+50000;
	printf("5�� 2�� �������� 5�� �� ����: %d\n", accumulated_total);

	/* += ���տ����� (compound operator)
	 * accumulated_total +=30000; ��
	 * accumulated_total=accumulated_total+30000 �� �����ϰ� �۵��ȴ�. */
	accumulated_total += 30000;
	printf("5�� 3�� �������� 5�� �� ����: %d\n", accumulated_total);

	/* �̷��� ���տ����ڴ� ��� ��������ڿ��� �����ϰ� ����ȴ�.
	 * a = a+b <=> a += b
	 * a = a-b <=> a -= b
	 * a = a*b <=> a *= b
	 * a = a/b <=> a /= b
	 * a = a%b <=> a %= b  */

	num1 += 3;
	num2 *= 4;
	num3 %= 5;
	printf("Result: %d, %d, %d \n", num1, num2 ,num3);
}
