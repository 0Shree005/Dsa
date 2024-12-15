#include <stdbool.h>
int bubbleSort(int* arr, int size, int count){
	for (int i = 0; i < size; i++){
		bool swapped = false;
		for (int j = 0; j < size - 1 - i; j++){
			count++;
			if (arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swapped = true;
			}
		}
		if (!swapped) break;
	}
	return count;
}
