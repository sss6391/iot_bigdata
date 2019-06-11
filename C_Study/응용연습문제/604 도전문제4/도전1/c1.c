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
		printf("历磊: ");
		scanf("%s", arr->author);
		printf("力格: ");
		scanf("%s", arr->title);
		printf("其捞瘤荐: ");
		scanf("%d", &arr->page);
	}

	for (index = 0; index < 3; index++) {
		printf("book %d \n", index+1);
		printf("历磊: %s\n", arr->author);
		printf("力格: %s\n", arr->title);
		printf("其捞瘤荐: %d\n", arr->page);
	}
}