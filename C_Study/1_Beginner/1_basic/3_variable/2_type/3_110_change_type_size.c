#include <stdio.h>

// ����: char, short Ÿ���� ��� ����� �������� ��ȭ Ȯ��
int main(){
	char num1=1, num2=2, result1=0;
	short num3=300, num4=400, result2=0;
	char test_num1=100, test_num2=110, result3=0;

	result3=test_num1+test_num2;
	printf("test_num1(%d)+test_num2(%d)=result3(%d)\n\n", test_num1, test_num2, result3);
	printf("test_num1(%d)+test_num2(%d)=%d\n\n", test_num1, test_num2, test_num1+test_num2);

	printf("size of num1: %d, num2: %d\n", sizeof(num1), sizeof(num2));
	printf("size of num3: %d, num4: %d\n", sizeof(num3), sizeof(num4));

	// char, short �迭�� Ÿ���� ��� ������ expression(ǥ����)���θ� ������� ��쿡�� 
	// �ش� Ÿ�� ���� �� ū Ÿ���� �ӽ� ����(Temporary Variable)�� ���������� �����ȴ�.
	// �� �ӽ� ������ ���α׷������� ������ �ʰ� �����Ϸ��� ������ ���� �����Ѵ�.
	// ����: ����ӵ��� ������. ���� ����� ���� �����ȴ�.
	// ����: �޸� ���� �ʷ��ȴ�. �������� ��������. ������ϱ� ��ƴ�.
	printf("size of char add: %d \n", sizeof(num1+num2));
	printf("size of short add: %d \n", sizeof(num3+num4));

	// ���� ����� ���� Ÿ���� ������ ������ ��쿡�� ������ Ÿ�� ����� �����Ѵ�.
	// ����: �޸� ����ȭ �� �� �ִ�. �������� ���ȴ�. ������ϱ� �����ϴ�.
	// ����: ����ӵ��� ��������� ���� �� �ִ�. (�ݺ������� ����Ǵ� ���)
	// 		 �������� ���� �ְ�� �� �ִ�. ((((�ִ밪 �Ѿ�ԵǴϱ�)))
	result1 = num1+num2;
	result2 = num3+num4;
	printf("size of result1 & result2: %d, %d\n", sizeof(result1), sizeof(result2));
}
