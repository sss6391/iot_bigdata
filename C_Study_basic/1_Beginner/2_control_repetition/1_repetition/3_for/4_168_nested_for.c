#include <stdio.h>

void main(){
	int cur, is;

	// 2���� ������ �����ͳ� ȭ������� while�� ���� for���� �����ϴ�.
	printf("�������� ����!\n");
	for(cur=2; cur<10; cur++){
		printf("==== %d�� ====\n",cur);
		for(is=1;is<10;is++){
			printf("%d * %d = %d\n", cur, is, cur*is);
		}
		printf("\n");
	}
}
