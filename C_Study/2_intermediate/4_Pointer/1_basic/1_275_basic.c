#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int num=7;
	int *pnum;
	pnum = &num;

	printf("num: %d\n", num);

	// %p �ּҰ��� ����ϱ� ���� �ɼ�
	// �Ϲ� ������ �����ϰ� �ش� ������ �ּҰ��� ������
	// &[������]
	// ex) int num=7; => &num

	printf("&num: %p\n", &num);

	// ������ ������ �����ϰ� �ش� ������ �ּҰ��� ������
	// �ش� ������ ����ϸ� �ȴ�.
	// ex) int *pnum; => pnum

	printf("pnum: %p\n", pnum);

	// ������ ������ ����Ű�� ���� ǥ���Ϸ���
	// *[������] ���� �����ؾ� �Ѵ�.
	printf("pnum�� ����Ű�� ��: %d\n", *pnum);

/* ��� ���
num: 7
&num: 0038FA94
pnum: 0038FA94
pnum�� ����Ű�� ��: 7
*/
}
