// #include <stdio.h> <== Standard IO (ex: printf, scanf �� ����� �� ����.)

void main(){
	int millitary_serial_number=1472004818; // millitary_serial_number: ���� 1472004818: ���
	int my_birth_day=910817;
	// const�� constant�� �ǹ��Ѵ�.
	const int ci_millitary_serial_number=1472004818; //ci: const int�� �ǹ�
	const int ci_my_birth_day=910817; // ci_my_birth_day: const

		// ���� �ٲ��� �ʰ� ������ �ϰ����ϴ� ������ �����ʹ�
		// ���� �ٲٴ� ���� ��ü�� ������ ����ų �� �ִ�.
		millitary_serial_number=1534567891;
		my_birth_day=910817;
		my_birth_day++;

		ci_millitary_serial_number=15341267891;
		ci_my_birth_day=9101237;
		ci_my_birth_day++;
}
