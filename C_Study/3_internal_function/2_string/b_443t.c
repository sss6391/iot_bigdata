#include <stdio.h>
#include<string.h>
#pragma warning (disable:4996)

// ����ڷ� ���� �н����带 �Է� �޾Ƽ� ��ġ�ϸ� �α��� �޼��� ���
// ��ġ ���� ������ ���޼����� �Բ� 3ȸ ���� �н����带 �Է¹ް� ��

void main() {
	const char* my_password = "sonbc";
	char input_password[30];
	int index;
	const int max_counter = 3;

	for (index = 0; index < max_counter;index++) {
//		printf("�н����带 �Է��ϼ���: ");
		fputs("��й�ȣ�� �Է��ϼ���: ", stdout);
//		scanf("%s", input_password);
		gets(input_password);
		
		if (!strcmp(my_password, input_password)) {
			puts("��й�ȣ�� ��ġ�մϴ�.");
			puts("�α��� �ϰڽ��ϴ�.");
			break;
		}else {
			printf("��й�ȣ�� %dȸ ����ġ�մϴ�.", index + 1);
			if (index == max_counter - 1) {
				printf("\n%dȸ ����ġ�Ǿ����Ƿ� ������ �ӽ÷� ��װڽ��ϴ�.\n", index + 1);
				puts("���� �߰� ������ ���Ͽ� ��й�ȣ�� �缳���� �ֽʽÿ�");
				break;
			}
			puts("�ٽ� �Է��ϼ���.");
		}	
	}
}
