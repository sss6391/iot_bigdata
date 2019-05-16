#include <stdio.h>
// sizeof ������: ����� ���� �Ǵ� �������� byte��
// typedef char LG_char <= ����� ���� Ÿ��
// typedef char LG_small_num <= ����� ���� Ÿ��

void main(){
	// int, char, short <= ���� Ÿ��(Native Type)
	
	char c_number=9; // c_ <= �ش� ������ Ÿ���� ������ �� �ִ� prefix�̴�.
	int i_number=1052;
	double d_number=3.1415;

	// ���� size ���ϱ�
	printf("=========== ������ size ���ϱ� ============\n");
	printf("���� cnumber�� ũ��: %d \n", sizeof(c_number));
	printf("���� 1_number�� ũ��: %d \n", sizeof(i_number));
	printf("���� d_number�� ũ��: %d \n\n", sizeof(d_number));
	
	// ���� type�� size ���ϱ�
	printf("======== ���� type�� size ���ϱ� ==========\n");
	printf("char�� ũ��: %d \n", sizeof(char));
	printf("signed char�� ũ��: %d \n", sizeof(signed char));
	printf("unsigned char�� ũ��: %d \n\n", sizeof(unsigned char));

	printf("int�� ũ��: %d \n", sizeof(int));
	printf("signed int�� ũ��: %d \n", sizeof(signed int));
	printf("unsigned int�� ũ��: %d \n\n", sizeof(unsigned int));

	printf("short int�� ũ��: %d \n", sizeof(short int));
	printf("signed short int�� ũ��: %d \n", sizeof(signed short int));
	printf("unsigned short int�� ũ��: %d\n\n", sizeof(unsigned short int));

	printf("long�� ũ��: %d \n", sizeof(long));
	printf("unsigned long�� ũ��: %d \n\n", sizeof(unsigned long));

	printf("long long�� ũ��: %d \n", sizeof(long long));
	printf("unsigned long long�� ũ��: %d \n", sizeof(unsigned long long));
}
