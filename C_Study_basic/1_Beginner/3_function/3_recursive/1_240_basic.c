#include <stdio.h>

void Recursive(int num){
	if(num<=0){		// ����� Ż�� ����
		return;		// ����� Ż��
	}

	printf("Recursive call %d \n", num);
	Recursive(num-1);
}

void main() {
	Recursive(3);
}
