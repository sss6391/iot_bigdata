#include <stdio.h>
#define STRING_JOB(A,B) "A�� ������ B�Դϴ�"
#define STRING_JOB2(A,B) #A"�� ������ " #B"�Դϴ�"

void main() {
	char * str="ABC" "DEF";		//	=> "ABCDEF" �� ������ �ܰ迡�� ������ �ȴ�.

//	STRING_JOB(�̵���, ������);

	printf("%s\n", str);
	printf("%s\n", STRING_JOB(�̵���, ������));	// => ��ó���ܰ迡�� ġȯ
//	printf("%s\n", "A�� ������ B�Դϴ�");		// => ���� ������ ���� ���� ġȯ
	printf("%s\n", STRING_JOB2(�̵���, ������));// => ��ó���ܰ迡�� ġȯ
//	printf("%s\n", "�̵���""�� ������ ""������""�Դϴ�.");
}
