// Declaration (����) PART 1
// include ����, ��ó�� #define, ��������, �Լ� ����(Function Prototype)
#include <stdio.h>

int num = 0;

// Function(�Լ�) PART 2
// Ư�� ����� �����ϴ� �Լ� ���Ǻ�
// �Լ��� ���(����) �� SIZE�� ���� �������� ���Ϸ� ������ �����ϴ�.
void Increment() {
	num++;
}

int GetNum() {
	return num;
}

// Controller PART 3
// main ��ü ���α׷��� ���������� ������ ���� ����
// ��Ʈ�ѷ�(Controller)�� ������ �����Ѵ�.
void main() {
	printf("num: %d\n", GetNum());
	Increment();
	printf("num: %d\n", GetNum());
	Increment();
	printf("num: %d\n", GetNum());
}
