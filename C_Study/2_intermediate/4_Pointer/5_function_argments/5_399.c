#include <stdio.h>
#pragma warning (disable:4996)

void main(int argc, char *argv[]) {
	int i=0;
	printf("���޵� ���ڿ��� ��: %d \n", argc);
	
	for(i=0; i <argc; i++){
	printf("%d��° ���ڿ�: %s \n", i+1, argv[i]);
	}
}
