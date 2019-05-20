#include <stdio.h>

void main(){
	int number=1;
/*	
 *	while 이후에 1줄 라인인 경우에는 {}를 생략할 수 있다.
 *	while(number<51)
		printf("Hello guest%d!\n",number++);
*/	

// {} 생략은 하지 않는 것이 좋다
// 아래와 같이 동일한 indentation을 하고 statement block으로
// 개발자가 착각하여 프로그램이 오동작 될 수 있기 때문이다.
	while(number<51)
		printf("Hello guest%d!\n",number);
		number++;
}
