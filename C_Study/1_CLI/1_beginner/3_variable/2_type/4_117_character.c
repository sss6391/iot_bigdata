#include <stdio.h>
// ����: C���� ���� ǥ���ϱ�
// typedef char LG_small_int;

void main(){
		char c_A=65;
		// ���ڸ� ǥ���� �� �ִ� ��� Ÿ������ �ƽ�Ű�ڵ��� ���ڸ�
		// ����� �� �ִ�. ������ �̴� 100% �ǹ̰� ����.
		// �ƽ�Ű �ڵ�� 32~126���� ǥ���Ǳ� ������
		// �������� ���� Ÿ���� char�� ����� ǥ�� �����ϱ� �����̴�.
		int i_A=65;
		char c_B=66;
		char c_Z=90;
		char c_a=97;
		char c_special=38;
		char c_7=55;
		char c_ii=124;


		printf("c_A������ ������: %d\n",c_A); 
		printf("i_A������ ���ڰ�: %c\n",i_A); 
		printf("c_A������ ���ڰ�: %c\n",c_A); 
		printf("c_B������ ���ڰ�: %c\n",c_B); 
		printf("c_Z������ ���ڰ�: %c\n",c_Z); 
		printf("c_a������ ���ڰ�: %c\n",c_a); 
		printf("ASCII 38 ���ڰ�: %c\n",c_special); 
		printf("ASCII 55(����7) ���ڰ�: %c\n",c_7); 
		printf("c_ii������ ���ڰ�: %c\n",c_ii); 
}
