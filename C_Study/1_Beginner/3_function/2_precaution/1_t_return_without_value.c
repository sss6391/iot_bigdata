#include <stdio.h>
void my_login(void){
	const int my_password=1234568;
	const unsigned char max_count=3;
	const unsigned char iot_ture=1;
	const unsigned char iot_false=0;
	int input_count=0;
	int input_password=0;
	int is_verified=iot_false;

	for( ;input_count<max_count;input_count++){
		printf("�н����带 �Է��ϼ���: ");
		scanf("%d", &input_password);

		if(my_password == input_password){
			printf("\nIoT �����͹� ���尡���մϴ�.\n");
			return; // return�� ������ �Ǹ� �Լ� ��ü�� ������ �������´�.
					// �ݺ������� break�� �����ϴ�.
		}
		printf("�н����尡 Ʋ�Ƚ��ϴ�. ");
	}
	
		printf("\n�н����� �ִ� �Է� ȸ�� %dȸ�� �ʰ��߽��ϴ�. \n",max_count);
		printf("�����Ƿ� Ȯ������ ��Ź�帳�ϴ�.");
}
void main(){
	my_login();
}
