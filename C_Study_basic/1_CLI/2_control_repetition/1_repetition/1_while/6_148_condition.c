#include <stdio.h>

void main(){
	int guest_limit=0;
	int guest_index=1;

	printf("�մ� ���� ���� ���� �Է��ϼ���: ");
	scanf("%d",&guest_limit);

	while(guest_index <= guest_limit){
			printf("Hello guest%d!\n",guest_index);
			guest_index++;
	}
}
