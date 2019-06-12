#include <stdio.h>
#pragma warning (disable:4996)

int File_compare(FILE* f_file1, FILE* f_file2) {
	int read_c_file1;
	int read_c_file2;

	while (1) {
		read_c_file1 = fgetc(f_file1);
		read_c_file2 = fgetc(f_file2);

		if (read_c_file1 != read_c_file2) {
			return 0;
		}
		if (read_c_file1 == EOF && read_c_file2 == EOF) {
			return 1;
		}
	}
}

void main(int argc, char* argv[]) {
	FILE* f_file1 = fopen(argv[1], "rt");
	FILE* f_file2 = fopen(argv[2], "rt");

	if (File_compare(f_file1, f_file2)) {
		fputs("두 파일이 일치합니다", stdout);
	}
	else {
		fputs("두 파일이 일치하지 않습니다", stdout);
	}
	fclose(f_file1);
	fclose(f_file2);
}