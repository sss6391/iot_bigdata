#include <stdio.h>
#include <stdlib.h>
#define MAX_BOOKS_NUM 3
#define a_MAX_CHAR 20
#define t_MAX_CHAR 20
#define p_MAX_CHAR 10

typedef struct {
	char author[a_MAX_CHAR];
	char title[t_MAX_CHAR];
	char pages[p_MAX_CHAR];
} library;

void main() {
	library* library_Books[MAX_BOOKS_NUM];
	int index;

	for (index = 0; index < MAX_BOOKS_NUM; index++) {
		library_Books[index] = malloc(sizeof(library));
	}

	puts("<ȭ�� ���>");

	for (index = 0; index < MAX_BOOKS_NUM; index++) {
		fputs("����: ", stdout);
		gets(library_Books[index]->author);
		fputs("����: ", stdout);
		gets(library_Books[index]->title);
		fputs("������ ��: ", stdout);
		gets(library_Books[index]->pages);
	}

	putchar('\n');

	for (index = 0; index < MAX_BOOKS_NUM; index++) {
		printf("book %d\n����: %s\n����: %s\n������ ��: %s\n",
			index + 1, library_Books[index]->author, library_Books[index]->title, library_Books[index]->pages);
	}

	for (index = 0; index < MAX_BOOKS_NUM; index++) {
		free(library_Books[index]);
	}

}