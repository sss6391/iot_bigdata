#include <stdio.h>
// ����: ���α׷��Ӱ� ���ϴ� �������� �ƹ����� ������� �̵� ����
// ����: �̵��� ���ؼ� ���α׷��Ӱ� �ǵ����� �ʾҴ� �Ǽ��� �߱� �� �� �ִ�.
//
// ���: ����(�ǹ�)������ goto���� ���� ������� �ʴ´�. 

void main(){
	int num;
	printf("�ڿ��� �Է�: ");
	scanf("%d",&num);

	// goto [���̺��];
	// �ش� ���̺�� �̵��Ѵ�.

	if(num==1)
		goto ONE;
	else if(num==2)
		goto TWO;
	else
		goto OTHER;

// [���̺��]: 

ONE: 
	printf("1�� �Է��ϼ̽��ϴ�.!");
	goto END;
TWO:
	printf("2�� �Է��ϼ̽��ϴ�.!");
	goto END;
OTHER:
	printf("3 Ȥ�� �ٸ� ���� �Է��ϼ̱���!");
END:
	printf("\nEND!");
}
