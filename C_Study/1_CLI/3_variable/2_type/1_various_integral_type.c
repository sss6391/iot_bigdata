#include <stdio.h>
/*
  c: 1 byte 문자
hhd: 정수형 char
 hd: short
  d: 부호가 있는 10진수 정수 (char, short, int 계열)
 ld: long
lld: long long
  u: 부호 없는 10진수 정수 (unsigned int, unsigned short, unsigned char)
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
	
	printf("int 최대값: %d\n", int_max);
	// Viual studio 2019 컴파일러에서 int를 4byte로 처리하기 때문에
	// int 타입으로는 2,147,483,647 이상의 값을 표현할 수 없다.
	printf("int_max + 1: %d\n", int_max_test);
	printf("signed int 최대값: %d\n", sint_max);
	printf("unsigned int 최대값: %u\n", uint_max);
	printf("unsigned int 최대값: %u\n\n", uint_max2);

	printf("char 최대값: %d\n", char_max);
	printf("unsigned char 최대값: %d\n", uchar_max);
	printf("short int 최대값: %d\n", short_int_max);
	printf("long int 최대값: %d\n", longint_max);
	printf("unsigned long 최대값: %lu\n", ulong_max);
	printf("long long 최대값: %lld\n", longlong_max);
	printf("unsigned long long 최대값: %llu\n", ulonglong_max);
	printf("float 최대값: %f\n", float_max);
	printf("double 최대값: %f\n", double_max);
	printf("long double 최대값: %lf\n\n", ldouble_max);

	printf("float 정밀도: %.25f\n", f_test);
	printf("long double 정밀도: %.25f\n", ld_test);

}
