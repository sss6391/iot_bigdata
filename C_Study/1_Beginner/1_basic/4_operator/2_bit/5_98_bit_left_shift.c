#include <stdio.h>
// Shift Left: ��Ʈ�� �������� N�� ��ŭ �̵� 
void main(){
	int num=15;					// 00000000 00000000 00000000 00001111
	int result1 = num << 1; 	// 00000000 00000000 00000000 00011110 => 30
	int result2 = num << 2; 	// 00000000 00000000 00000000 00111100 => 60
	int result3 = num << 3; 	// 00000000 00000000 00000000 01111000 => 120
	int max_num = 1073741824;	// 01000000 00000000 00000000 00000000
	int result4 = max_num << 1;


	printf("1ĭ �̵� ���: %d\n",result1);
	printf("2ĭ �̵� ���: %d\n",result2);
	printf("3ĭ �̵� ���: %d\n",result3);

	printf("\nMax number bit�� Shift Left ���� �׽�Ʈ: %d\n", result4);
}
