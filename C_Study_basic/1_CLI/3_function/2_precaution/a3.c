#include <stdio.h>
#pragma warning (disable:4996)
void main(){
	int num=0;
	int count=0;
	int input_num=0;
	int max;
	int limit=0;

	printf("�Է��Ͻ� �������� 3�� ������ ã���ϴ� �Է��ϼ���: ");
	scanf("%d", &input_num);
	
	for(; num <= input_num ; num++){
		max=1;
		while(max < 1000000){
			if( (num / max) % 10 == 3){
				count++;
			}
		max = max * 10;		
		}
	}
	printf("%d", count);
}
