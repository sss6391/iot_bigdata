#include <stdio.h>
#pragma warning (disable:4996)

struct point {
	int xpos;
	int ypos;
};

struct person{
	char name[20];
	char phoneNum[20];
	int age;
};

void main() {
	struct point pos = { 10,20 };
	struct person man = { "�̽±�", "010-1212-0001", 21 };

	printf("%p %p \n", &pos, &pos.xpos);
	printf("%p %p \n", &man, &man.name);
}
