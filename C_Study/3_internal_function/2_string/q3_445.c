#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#pragma warning (disable:4996)

void Compare_name(char *arr1, char* arr2, int space1, int space2);
void Compare_age(char* arr1, char *arr2, int,int);
int Space_Counter(char*arr);

void Compare_age(char* arr1, char* arr2, int space1, int space2) {
	int* ptr1 = &arr1[space1];
	int* ptr2 = &arr2[space2];

	if (atoi(ptr1) == atoi(ptr2)) {
		printf("���̰� �����մϴ�");
	}else {
		printf("���̰� �ٸ��ϴ�");
	}
}

void Compare_name(char* arr1, char* arr2, int space1, int space2) {
	int index=0;

	if (space1 != space2) {
		printf("�̸��� �ٸ��ϴ�");
		return;
	}
	if(!strncmp(arr1, arr2, space1)) {
		printf("�̸��� �����ս��ϴ�");
	}else {
		printf("�̸��� �ٸ��ϴ�");
	}
}

int Space_Counter(char *arr) {
	int index;
	
	for (index = 0; arr[index] != ' '; index++) {
	}
	return index;
}

void main() {
	char string1[20];
	char string2[20];
	int string1_space;
	int string2_space;

	printf("ù ��° �̸� ���� �Է�(�̸� ���� ���� ����): ");
	fgets(string1, sizeof(string1), stdin);
	printf("�� ��° �̸� ���� �Է�(�̸� ���� ���� ����): ");
	fgets(string2, sizeof(string2), stdin);

	string1_space = Space_Counter(string1);
	string2_space = Space_Counter(string2);
	Compare_name(string1, string2, string1_space, string2_space);
	printf("\n");
	Compare_age(string1, string2, string1_space, string2_space);
}
