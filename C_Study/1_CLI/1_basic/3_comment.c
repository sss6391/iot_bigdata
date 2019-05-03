/* 2_printf_format_string.c */
/* */ /* <== 주석 (comment) */
/* 설명1 <== Old style(ANSI 89) comment */
// 설명2 <== New style(ANSI 99) comment 
/*
 * 설명1
 * 설명2
 * 설명3
*/
// 설명1
// 설명2
// 설명3


#include <stdio.h>

void main(){
	printf("나는 사과를 1개 먹었다.\n");
	// %d <== format string
	/* %d <== format string */
	printf("나는 딸기를 %d개 먹었다.\n", 10);
	printf("나는 자두를 %d개 먹었고 체리 %d개를 먹었습니다.\n", 2,4);
	printf("아~~ 배부르다!");
}
