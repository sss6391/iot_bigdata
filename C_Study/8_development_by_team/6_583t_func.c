// #include "7_val.h"

// #include "header\7_val.h"	// <= Winsows Style
// Windows �󿡼� Linux Style �ȴ�

// #include "header/7_val.h"  	// <= Linux Style
// Linux �󿡼� Windows Style �ȵȴ�.  �Ѵ� �Ǵ�  / �����

//#include "C:\iot_bigdata\C_Study\8_development_by_team\header\7_val.h"
// ������ ������ ���� ū �������� ��ȣ ����� ��������.
// ��ǻ�͸��� �����ΰ� �ٸ� ���
// Linux�󿡼� \�� �ν��� ���� �ʴ� ���

 #include "../header/7_val.h"

void Increment() {
	num++;
}

int GetNum() {
	return num;
}
