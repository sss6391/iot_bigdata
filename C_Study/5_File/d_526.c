#include <stdio.h>
#pragma warning (disable:4996)
typedef struct fren {
	char name[10];
	char sex;
	int age;
} Friend;
	
void main() {
	FILE* fp;
	Friend myfren1;
	Friend myfren2;

	fp = fopen("friend.bin", "wb");
	printf("�̸�, ����, ���� �� �Է�: ");
	scanf("%s %c %d", myfren1.name, &(myfren1.sex), &(myfren1.age));
	fwrite((void*)&myfren1, sizeof(myfren1), 1, fp);
	fclose(fp);
	
	fp = fopen("friend.bin", "rb");
	fread((void*)& myfren2, sizeof(myfren2), 1, fp);
	printf("%s %c %d", myfren2.name, myfren2.sex, myfren2.age);
	fclose(fp);
}