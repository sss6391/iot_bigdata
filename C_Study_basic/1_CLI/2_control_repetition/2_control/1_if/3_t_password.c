#include <stdio.h>

void main(){
	const int my_password=1234568;
	const unsigned char max_count=3;
	const unsigned char iot_ture=1;
	const unsigned char iot_false=0;
	int input_count=0;
	int input_password=0;
	// is_ �ǹ� <= flag ���� Ư�� �̺�Ʈ�� ����Ǿ����� Ȯ���ϴ� �뵵��
	// ����ϴ� ����
	int is_verified=iot_false;

	for( ;input_count<max_count;input_count++){
		printf("�н����带 �Է��ϼ���: ");
		scanf("%d", &input_password);

		if(my_password == input_password){
			printf("\nIoT �����͹� ���尡���մϴ�.\n");
			is_verified = iot_ture;
			break;
		}
		printf("�н����尡 Ʋ�Ƚ��ϴ�. ");
	}
	
	// single if�� �ùٸ��� ����� ��
	if(is_verified==iot_false){
		printf("\n�н����� �ִ� �Է� ȸ�� %dȸ�� �ʰ��߽��ϴ�. \n",max_count);
		printf("�����Ƿ� Ȯ������ ��Ź�帳�ϴ�.");
	}
	// ���࿡ �Ʒ��� ���� �ڵ尡 �߰��� �ȴٸ� �̴� ����� ����� sigle if�� �ƴϴ�
	if(is_verified==iot_ture){
	printf("\n ����Ϸ��Ͽ����ϴ�.");
	}
}
