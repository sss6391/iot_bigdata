#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int ch;
	
	printf("������ �Է����ּ���: ");
	ch = getchar();
	if (ch < 65 || 122 < ch || (90 < ch && ch < 97)) {
		printf("�ùٸ� ������ �Է����ּ���");
		return;
	}
	
	if (ch < 91){
		ch = ch + 32;
	}else {
		ch = ch - 32;
	}
	putchar(ch);
}