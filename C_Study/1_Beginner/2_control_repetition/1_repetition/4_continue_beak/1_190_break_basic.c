#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	int sum=0;
	int number=0;
	const unsigned char Iot_ture=1;
	const int target_accumulated_number=5000;

	while(Iot_ture){
		sum += number;
		if(sum > target_accumulated_number){
				// �ݺ���(for, while, do while)���� break�� ������ �Ǹ�
				// ���� ���ʿ� �ִ� �ݺ����� ������ ����� �ȴ�.
				break;
		}
		number++;
	}	
	printf("sum: %d, ���� ������: %d) \n",sum,target_accumulated_number);
	printf("���� number:%d \n",number);
}
