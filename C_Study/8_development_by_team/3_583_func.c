extern int num;
static int num2 = 0;

// extern int num = 10;
// extern ������ ������ ���Ͽ����� �ʱ�ȭ�� ����
// �ǹ������� extern ������ ������� �ʵ��� �ǰ��ϰ� �ִ�.

void Increment() {
	num++;
	num2++;
}

int GetNum() {
	return num;
}
