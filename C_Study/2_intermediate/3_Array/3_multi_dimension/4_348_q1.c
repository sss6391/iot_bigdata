#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	int arr[3][9];
	int i;
	int j;

	for(i=0;i<3;i++){
		for(j=0;j<9;j++){
			arr[i][j] = (i+2) * (j+1);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<9;j++){
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
}

