#include <stdio.h>
/* 
 * �� ����������(Not)
 * ����(0)�� 1�� ��ȯ
 * ��(0�� �ƴ� ��)�� 0���� ��ȯ
 */

void main(){
	int num1=1;
	int num2=0;
	int num3=100;
	int num4=-1;
	int result=0;

	result = (!num1);
	printf("!num1	=>	���: %d\n", result);

	result = (!num2);
	printf("!num2	=>	���: %d\n", result);

	result = (!num3);
	printf("!num3	=>	���: %d\n", result);

	result = (!num4);
	printf("!num4	=>	���: %d\n", result);
}
