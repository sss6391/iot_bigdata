#include <stdio.h>
#pragma warning (disable:4996)

typedef struct A
{
	char author[20];
	char title[50];
	int page;
}List;

void main() {
	List arr[3];
	int index;

	for (index = 0; index < 3; index++) {
		printf("����: ");
		scanf("%s", arr->author);
		printf("����: ");
		scanf("%s", arr->title);
		printf("��������: ");
		scanf("%d", &arr->page);
	}

	for (index = 0; index < 3; index++) {
		printf("book %d \n", index+1);
		printf("����: %s\n", arr->author);
		printf("����: %s\n", arr->title);
		printf("��������: %d\n", arr->page);
	}
}