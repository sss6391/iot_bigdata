#include <stdio.h>
#pragma warning (disable:4996)
#define ARR_SIZE 3
// #define [Ű����][���]

typedef struct student {
	char name[20];
	char stdnum[20];
	char school[20];
	char major[20];
	int year;
} Student;

void ShowStudentInfo(Student* sptr) {
	printf("�л� �̸�: %s\n", sptr->name);
	printf("�л� ������ȣ: %s\n", sptr->stdnum);
	printf("�б� �̸�: %s\n", sptr->school);
	printf("���� ����: %s\n", sptr->major);
	printf("�г�: %d\n", sptr->year);
}

void main() {

// (�迭���� ��� ���� ���� �Ұ���)	
//	const int MAX_SIZE = 3;
//	int MAX_SIZE = 3;
//	Student arr[MAX_SIZE];

//	Student arr[7];
	Student arr[ARR_SIZE];
	int i;

	for (i = 0; i < ARR_SIZE; i++) {
		printf("�̸�: "); scanf("%s", arr[i].name);
		printf("��ȣ: "); scanf("%s", arr[i].stdnum);
		printf("�б�: "); scanf("%s", arr[i].school);
		printf("����: "); scanf("%s", arr[i].major);
		printf("�г�: "); scanf("%d", &arr[i].year);
	}

	for (i = 0; i < ARR_SIZE; i++) {
		ShowStudentInfo(&arr[i]);
	}
}
