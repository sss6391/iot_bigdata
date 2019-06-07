#include <stdio.h>
#pragma warning (disable:4996)

int my_sum(int n) {
	int sum = 0;
	int number = 0;

	n++;
	if (n == 3) {
		return 0;
	}

	sum = sum + my_sum(n);
}

void main() {
	int total=0;
	int init_value = 0;
	
	total = my_sum(init_value);
}
