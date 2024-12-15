#include <stdio.h>
int linearSearch(int arr[], int size, int userInput, int *count) {
	for(int i = 0; i < size; i++) {
		(*count)++;
		/*printf("count incremented");*/
		if(userInput == arr[i]) {
			return i;
		}
	}
	return -1;
}
