#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char str[6];
	int idx=0;

	// char은 1byte 한글은 2byte 따라서 아래 코드가 성립이 되지 않는다.
	// 컴파일러에 따라서 다양한 에러가 발생할 수 있다.
	str[0] = '안';
	
	printf("입력 받은 문자열: %s \n", str);

	/*
	printf("문자 단위 출력: ");
	while(str[idx] != '\0'){
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
	*/
}
