#include <stdio.h>

void main(){
	const int my_password=1234568;
	const unsigned char max_count=3;
	const unsigned char iot_ture=1;
	const unsigned char iot_false=0;
	int input_count=0;
	int input_password=0;
	// is_ 의미 <= flag 변수 특정 이벤트가 수행되었는지 확인하는 용도로
	// 사용하는 변수
	int is_verified=iot_false;

	for( ;input_count<max_count;input_count++){
		printf("패스워드를 입력하세요: ");
		scanf("%d", &input_password);

		if(my_password == input_password){
			printf("\nIoT 빅데이터반 입장가능합니다.\n");
			is_verified = iot_ture;
			break;
		}
		printf("패스워드가 틀렸습니다. ");
	}
	
	// single if를 올바르게 사용한 예
	if(is_verified==iot_false){
		printf("\n패스워드 최대 입력 회수 %d회를 초과했습니다. \n",max_count);
		printf("행정실로 확인절차 부탁드립니다.");
	}
	// 만약에 아래와 같은 코드가 추가가 된다면 이는 제대로 사용한 sigle if가 아니다
	if(is_verified==iot_ture){
	printf("\n 입장완료하였습니다.");
	}
}
