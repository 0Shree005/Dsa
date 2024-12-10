#include <stdio.h>
void selectionSort (int arr[], int size) {
	int count = 0;
	for (int i = 0; i < size - 1; i++){
		int min = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[ min ] > arr[ j ]) {
				min = j;
			}
		}

		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
		count++;
	}
	printf("final count for selection sort is: %d",count);
}
