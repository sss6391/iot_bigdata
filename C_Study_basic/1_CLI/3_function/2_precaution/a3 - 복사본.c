#include <stdio.h>

void main(){
	int num=0;
	int count=0;
	int input_num=0;

	printf("�Է��Ͻ� �������� 3�� ������ ã���ϴ� �Է��ϼ���: ");
	scanf("%d", &input_num);
	
	for(; num <= input_num ; num++){
		if( num/1 % 10 == 3){
			count++;
			if( num/10 % 10 == 3){
				count++;
			}	if( num/100 % 10 == 3){
					count++;
				}	if( num/1000 % 10 == 3){
						count++;
					}
		}else if( num/10 % 10 == 3){
			count++;
				if( num/100 % 10 == 3){
					count++;
				}
		}else if( num/100 % 10 == 3){
			count++;
		}
	}
	printf("%d", count);
}
