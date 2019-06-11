#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

typedef struct A
{
	char *author;
	char *title;
	int page;
}List;

void main() {
	List arr[3];
	char input_string[50];
	int input_number;
	int counter=0;
	int index;
	int index2=0;

	for (index = 0; index < 3; index++) {
		printf("历磊: ");
		scanf("%s", input_string);
		while(1){
			if (input_string[index2] == 0) {
				break;
			}
			counter++;
			index2++;
		}
		arr->author = (char*)malloc(sizeof(char)* counter);
		arr->author = input_string;
		printf("力格: ");
		scanf("%s", input_string);
		
		index2 = 0;
		while (1) {
			if (input_string[index2] == '0') {
				break;
			}
			counter++;
			index2++;
		}
		arr->title = (char*)malloc(sizeof(char) * counter);
		arr->title = input_string;

		printf("其捞瘤荐: ");
		scanf("%d", &arr->page);
	}
	
	for (index = 0; index < 3; index++) {
		printf("book %d \n", index + 1);
		printf("历磊: %s\n", arr->author);
		printf("力格: %s\n", arr->title);
		printf("其捞瘤荐: %d\n", arr->page);
	}
}