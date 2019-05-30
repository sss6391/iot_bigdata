#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int ch;
	
	printf("문자열을 입력해주세요: ");

	while(1){
		ch = getchar();
		
		if (ch == 10) {
			break;
		}
		
		if (ch < 65 || 122 < ch || (90 < ch && ch < 97)) {
			printf("\n올바른 문자열을 입력해주세요\n");
			return;
		}
		
		if (ch < 91) {
			ch = ch + 32;
		}else {
			ch = ch - 32;
		}
		putchar(ch);
	}	
}