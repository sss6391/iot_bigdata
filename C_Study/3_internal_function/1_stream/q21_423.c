#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int ch;
	
	printf("문자을 입력해주세요: ");
	ch = getchar();
	if (ch < 65 || 122 < ch || (90 < ch && ch < 97)) {
		printf("올바른 문자을 입력해주세요");
		return;
	}
	
	if (ch < 91){
		ch = ch + 32;
	}else {
		ch = ch - 32;
	}
	putchar(ch);
}