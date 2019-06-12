#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

typedef struct person {
	char name[10];
	char number[20];
}Person;

void Insert(Person* p) {

	printf("[INSERT]\n");
	printf("Input Name: ");
	scanf("%s", &*p->name);
	printf("Input Tel Number: ");
	scanf("%s", &*p->number);
	printf("\t\tData Inserted\n");
}

void Delete(Person* p, int m) {
	char str[20];
	int index;

	printf("\n이름 입력: ");
	scanf("%s", str);
	for (index = 0; index < m; index++) {
		if (!strcmp(p[index].name, str)) {
			printf("이름: %s 삭제되었습니다\n", p[index].name);
			*p[index].name = 0;
			*p[index].number = 0;
			return;
		}
	}
	printf("\n입력한 이름이 목록에 없습니다\n");
}

void Search(Person* p, int m) {
	char str[20];
	int index;

	printf("\n이름 입력: ");
	scanf("%s", str);
	for (index = 0; index < m; index++) {
		if (!strcmp(p[index].name, str)) {
			printf("Name: %s\t", p[index].name);
			printf("Tel: %s\n", p[index].number);
			return;
		}
	}
	printf("\n입력한 이름이 목록에 없습니다\n");
}

void Print(Person* p, int m) {
	int index;

	printf("\n[Print All Data]\n");
	for (index = 0; index < m; index++) {
		printf("Name: %s\t", p[index].name);
		printf("Tel: %s\n", p[index].number);
	}
}

void Exit(Person *p, int m) {
	char str1[20];
	char str2[20];
	int index = 0;
	
	FILE* fp = fopen("personal_infomation.txt", "wt");

	printf("\n=====Exit=====\n");
	
	for (index = 0;; index++) {
		fputs(p[index].name,fp);
		fputs(p[index].number,fp);
		if (p[index].name < -1)
		{
			break;
		}
	}
	printf("\nFile saved!!\n");
}

void main() {
	int select_number;
	int counter = 0;
	int index = 0;
	Person p[100];

	while (1) {
		printf("\n*****MENU*****");
		printf("\n1. Insert \n2. Delete \n3. Search \n4. Print All \n5. Exit");
		printf("\nChoose the item: ");
		scanf("%d", &select_number);
		switch (select_number) {
		case 1:
			Insert(&p[index]);
			counter++;
			index++;
			break;
		case 2:
			Delete(&p[0], counter);
			break;
		case 3:
			Search(&p[0], counter);
			break;
		case 4:
			Print(&p[0], counter);
			break;
		case 5:
			Exit(&p[0], counter);
			return;
		}
	}
}