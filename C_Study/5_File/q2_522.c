#include <stdio.h>
#pragma warning (disable:4996)
	
void main() {
	FILE* fp = fopen("mystory.txt", "at");
	fputs("\n#Áñ°Ü¸Ô´Â À½½Ä: Â«»Í, ÅÁ¼öÀ°\n", fp);
	fputs("#Ãë¹Ì: Ãà±¸\n", fp);
	fclose(fp);
}