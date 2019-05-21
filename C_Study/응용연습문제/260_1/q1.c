#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int arr[5];
	int i;
	int max;
	int min;
	int total=0;
	int size;

	size = sizeof(arr) / sizeof(int);
	for (i = 0; i < size; i++) {
		printf("¼ýÀÚ¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ");
		scanf("%d", &arr[i]);
	}

	min = arr[0];
	max = arr[0];

	for (i = 0; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}if (min > arr[i]) {
			min = arr[i];
		}
	}

	for (i = 0; i < size; i++) {
		total += arr[i];
	}
	printf("ÃÖ´ñ°ª: %d ÃÖ¼Ú°ª: %d ÃÑ ÇÕ: %d", max, min, total);
}