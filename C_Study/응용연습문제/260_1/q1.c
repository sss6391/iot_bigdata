#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int arr[5];
	int i;
	int max;
	int min;
	int total=0;

	for (i = 0; i < 5; i++) {
		printf("¼ýÀÚ¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ");
		scanf("%d", &arr[i]);
	}

	max = arr[0];
	for (i = 0; i < 5; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	min = arr[0];
	for (i = 0; i < 5; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}

	for (i = 0; i < 5; i++) {
		total += arr[i];
	}
	printf("ÃÖ´ñ°ª: %d ÃÖ¼Ú°ª: %d ÃÑ ÇÕ: %d", max, min, total);

}