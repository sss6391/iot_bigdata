#include <stdio.h>
/* �� AND ����ǥ
 * A����	B����	c����	���
 * ����		����	����	����
 * ����		����	��		����
 * ����		��		����	����		
 * ��		����	����	����
 * ����		��		��		����
 * ��		����	��		����
 * ��		��		����	����
 * ��		��		��		��
 */

void main(){
		int num1=10;
		int num2=12;
		int num3=35;
		int result;
		
		printf("num1: %d, num2:%d, num3:%d\n",num1,num2,num3);

		// ���� && ���� && ����
		result = (num1 == 1 && num2 == 2 && num3 == 3);
		printf("(num1 == 1 && num2 == 2 && num3 == 3) => �򰡰��: %d\n", result);
		
		// ���� && ���� && ��
		result = (num1 == 1 && num2 == 2 && num3 == 35);
		printf("(num1 == 1 && num2 == 2 && num3 == 35) => �򰡰��: %d\n", result);

		// ���� && �� && ����
		result = (num1 == 1 && num2 == 12 && num3 == 3);
		printf("(num1 == 1 && num2 == 12 && num3 == 3) => �򰡰��: %d\n", result);

		// �� && ���� && ����
		result = (num1 == 10 && num2 == 2 && num3 == 3);
		printf("(num1 == 10 && num2 == 2 && num3 == 3) => �򰡰��: %d\n", result);
		
		// ���� && �� && ��
		result = (num1 == 1 && num2 == 12 && num3 == 35);
		printf("(num1 == 1 && num2 == 12 && num3 == 35) => �򰡰��: %d\n", result);
		
		// �� && ���� && ��
		result = (num1 == 10 && num2 == 2 && num3 == 35);
		printf("(num1 == 10 && num2 == 2 && num3 == 35) => �򰡰��: %d\n", result);
		
		// ���� && �� && ��
		result = (num1 == 1 && num2 == 12 && num3 == 35);
		printf("(num1 == 1 && num2 == 12 && num3 == 35) => �򰡰��: %d\n", result);
		
		// �� && �� && ��
		result = (num1 == 10 && num2 == 12 && num3 == 35);
		printf("(num1 == 10 && num2 == 12 && num3 == 35) => �򰡰��: %d\n", result);
}
