#include <stdio.h>

void main(){
		int accumulated_total=0;

		printf("�������� 5�� �� ����: %d\n", accumulated_total);

		accumulated_total+=10000;
		printf("5�� 1�� �������� 5�� �� ����: %d\n", accumulated_total);

		/* �Ʒ����� =+ ���Կ����ڰ� �ƴϴ�.
		 * ��� 30000 �� ���� �� �Ҵ� �Ǿ��� ���̴�.
		 * ���Կ����ڴ� �Ʒ��� ���� ���� �ϳ� �߸�����ϴ� ������ ����
		 * ��ɻ��� ������ �߻��� �� �ִ�. 
		 * ���� ���е��� ��������� ������ ���ѵǾ�� �ϴ� ����Ʈ����
		 * ���߽� ���Կ����ڸ� ������� �ʴ� ���� �ǰ��ϰ� �ִ�.
		*/
		accumulated_total=+30000;
		printf("5�� 3�� �������� 5�� �� ����: %d\n", accumulated_total);

		accumulated_total -= 5000;
		printf("ū�� �Ĵ翡�� 5000�� ���ɰ� ����\n");
		printf("5�� 3�� �������� 5�� �� ����: %d\n", accumulated_total);

		// ���⼭ -�� ��ȣ�� ��Ÿ���� ��ȣ(sign) �������̴�.
		accumulated_total =- 20000;
		printf("VIPS���� ����ģ���� 20000�� ���ᰪ ����\n");
		printf("5�� 3�� �������� 5�� �� ����: %d\n", accumulated_total);

}
