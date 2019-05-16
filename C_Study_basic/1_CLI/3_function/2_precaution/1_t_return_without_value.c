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
		printf("패스워드를 입력하세요: ");
		scanf("%d", &input_password);

		if(my_password == input_password){
			printf("\nIoT 빅데이터반 입장가능합니다.\n");
			return; // return을 만나게 되면 함수 자체를 무조건 빠져나온다.
					// 반복문에서 break와 유사하다.
		}
		printf("패스워드가 틀렸습니다. ");
	}
	
		printf("\n패스워드 최대 입력 회수 %d회를 초과했습니다. \n",max_count);
		printf("행정실로 확인절차 부탁드립니다.");
}
void main(){
	my_login();
}
