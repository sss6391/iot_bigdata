#include <stdio.h>

void main(){
	int num;
	printf("star! ");

	for(num=1; num<20; num++){
		if(num%2==0 ||num%3==0)
		// �ݺ������� continue�� ������ �Ǹ� continue ������ �ݺ��� ������
		// ��ɹ��� ��� skip�ϰ� �ݺ��� ù��° �ٷ� �̵��ϰ� �ȴ�.
			continue;
		printf("%d ",num);
	}
	printf("end! \n");
}
