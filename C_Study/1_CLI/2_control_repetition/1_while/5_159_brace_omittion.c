#include <stdio.h>

void main(){
	int number=1;
/*	
 *	while ���Ŀ� 1�� ������ ��쿡�� {}�� ������ �� �ִ�.
 *	while(number<51)
		printf("Hello guest%d!\n",number++);
*/	

// {} ������ ���� �ʴ� ���� ����
// �Ʒ��� ���� ������ indentation�� �ϰ� statement block����
// �����ڰ� �����Ͽ� ���α׷��� ������ �� �� �ֱ� �����̴�.
	while(number<51)
		printf("Hello guest%d!\n",number);
		number++;
}
