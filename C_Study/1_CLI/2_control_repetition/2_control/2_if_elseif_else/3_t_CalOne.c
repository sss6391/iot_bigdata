#include <stdio.h>

void main(){
	int opt;
	double num1, num2;
	double result;

	printf("1. ���� 2. ���� 3. ���� 4. ������ \n");
	printf("����? ");
	scanf("%d", &opt);
	printf("�� ���� �Ǽ� �Է�: ");
	scanf("%lf %lf", &num1, &num2);

	if(opt==1){
		result = num1 + num2;
	}else if(opt==2){
		result = num1 - num2;
	}else if(opt==3){
		result = num1 * num2;
// ���⼭ else if�� ����ϴ� ���� ���� �䱸������ �߰��Ǿ� 
// ���ο� ���� ����� �߰��Ǵ� ���� ����� �ڵ�
//	else if(opt==4){

// else�� ����ϰڴٴ� ���� ���� ��ɿ��� ���� �߰������ ���ٴ� ���� �Ͻ�
	}else if(opt==4){
		result = num1 / num2;
	}
	printf("���: %f \n", result);
}
