#include <stdio.h>
#pragma warning (disable:4996)

void main() {	// �Լ� ���Ǻ�

	// local variable ���� ����� (���� �Ǵ� ����, �ʱ�ȭ�� ���� �Ѵ�.)
	// local variable ���� ����ο��� ������ �����ϴ� ����
	// ANSI-89 Style �̴�
//	int cnt;
	int varl;

	// �Ʒ��� ���� scope���� ������ �������� ����� �� ����.
	// int varl;

	for (int cnt = 0; cnt < 3; cnt++) {
		// �Լ� �ȿ� {} �ȿ� ����� ������ {} �ȿ����� ������ �����ϴ�.
		// local variable ���� ����� �̿ܿ� �߰����� ������ �����Ӱ�
		// �����ϴ� ���� ANSI-99 Style�̴�.
		// ANSI-99 Style�� ������ �����ϴ� ���� ��õ���� �ʴ´�.
		// ����������. �׸��� �������� �Ǽ��� �����Ѵ�.

		int num = 0;
		num++;
		printf("%d ��° �ݺ�. �������� num�� %d\n", cnt + 1, num);
	}

	// [] Scope�� num�� ���� �� �� ���� ���� �̱� ������
	// �Ʒ� �ڵ�� ������ ������ �߻��Ѵ�.
	// printf("���� num�� %d\n", num);

	// cnt�� for�� ���� {} scope�� �ش��Ѵ�.
	// printf("���� cnt�� %d\n", cnt);

	// �̷��� {} Scope�� {}����ϴ� ��� ��ɹ��� �����ϰ� ����ȴ�.
	// �Ʒ� cnt�� main�Լ��� �ֻ��� {} scope�� ������.
	// �ݸ� ���� cnt�� main�Լ� �ؿ� for���� {}�� scope�� ������.
	int cnt = 0;

	while (1) {
		// �� for���� num�� �ٸ� scope�̱� ������ ������ �̸�����
		// ���������� �����ϴ�.
		int num = 0;
		// ���� {} scope���� ���� scope�� �ִ� ������ ���� ����
		cnt++, num++;
			if (cnt > 3) {
				break;
			}
	}
	// ���� cnt�� ���� Scope�̰� ���� scope���� ���� scope�� ����
	// ������ ����� ��ȿ�ϴ�.
	printf("���� cnt: %d\n", cnt);

	// num�� while������ scope�̱� ������ ���� �Ұ���
	// printf("���� cnt: %d\n", num);
}