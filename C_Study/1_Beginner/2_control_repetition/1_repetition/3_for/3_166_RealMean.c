#include <stdio.h>

void main(){
	double total=0.0;
	double input=0.0;
	int num=0;

	// �Ʒ��� ���� for���� while������ ��ü �ϴ� ���� ����
	for(;input>=0.0;){
		total+=input;
		printf("�Ǽ� �Է�(minus to quit) : ");
		scanf("%lf", &input);
		num++;
	}
	printf("���: %f \n",total/(num-1));
}
