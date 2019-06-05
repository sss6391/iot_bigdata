#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char name[10];
	char sex;
	int age;
	
	FILE* fp = fopen("friend.txt", "rt");
	int ret;

	while (1) {
		ret = fscanf(fp, "%s %c %d", name, &sex, &age);
		if (ret == EOF) {
			break;
		}
		printf("%s %c %d \n", name, sex, age);
	}

	fclose(fp);
}
