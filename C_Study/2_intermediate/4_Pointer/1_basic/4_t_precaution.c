#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int num1=7;

// *�� ��ġ�� �����Ӱ� �ᵵ ����� ����.
// �Ϲ������� �Ʒ� �Ǵ� �Ʒ� �Ʒ� �ڵ带 ����Ѵ�.
	int *pnum;

//	int* pnum;
//	int * pnum;
//	int*pnum;

	pnum = &num1;

	printf("num1: %d\n", num1);
	printf("*pnum: %d\n", *pnum);


}
