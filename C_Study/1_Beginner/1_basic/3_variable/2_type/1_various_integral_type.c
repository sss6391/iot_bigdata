#include <stdio.h>
/*
  c: 1 byte ����
hhd: ������ char
 hd: short
  d: ��ȣ�� �ִ� 10���� ���� (char, short, int �迭)
 ld: long
lld: long long
  u: ��ȣ ���� 10���� ���� (unsigned int, unsigned short, unsigned char)
  f: float, double
 Lf: long double
 */


void main(){
	int int_max=2147483647;
	int int_max_test=2147483648;
	signed int sint_max=2147483647;
	unsigned int uint_max=4294967295;
	unsigned uint_max2=4294967295;

	char char_max=127;	
	unsigned char uchar_max=255;
	short int short_int_max=32767;
	unsigned short int usint_max=65535;
	long int longint_max=2147483647;
	unsigned long ulong_max=4294967295;
	long long longlong_max=9223372036854775807;
	unsigned long long ulonglong_max=18446744073709551615;
	float float_max=654321.234567;
	double double_max=12345678912345.1234567;
	long double ldouble_max=12345678912345.12345;

	float f_test=1.123456789123456789;
	long double ld_test=1.123456789123456789;
	
	printf("int �ִ밪: %d\n", int_max);
	// Viual studio 2019 �����Ϸ����� int�� 4byte�� ó���ϱ� ������
	// int Ÿ�����δ� 2,147,483,647 �̻��� ���� ǥ���� �� ����.
	printf("int_max + 1: %d\n", int_max_test);
	printf("signed int �ִ밪: %d\n", sint_max);
	printf("unsigned int �ִ밪: %u\n", uint_max);
	printf("unsigned int �ִ밪: %u\n\n", uint_max2);

	printf("char �ִ밪: %d\n", char_max);
	printf("unsigned char �ִ밪: %d\n", uchar_max);
	printf("short int �ִ밪: %d\n", short_int_max);
	printf("long int �ִ밪: %d\n", longint_max);
	printf("unsigned long �ִ밪: %lu\n", ulong_max);
	printf("long long �ִ밪: %lld\n", longlong_max);
	printf("unsigned long long �ִ밪: %llu\n", ulonglong_max);
	printf("float �ִ밪: %f\n", float_max);
	printf("double �ִ밪: %f\n", double_max);
	printf("long double �ִ밪: %lf\n\n", ldouble_max);

	printf("float ���е�: %.25f\n", f_test);
	printf("long double ���е�: %.25f\n", ld_test);

}
