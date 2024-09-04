#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#ifdef __cplusplus
extern "C" {
	#endif

	int binarySearch(int arr[], int size, int target);
	void mergeSort(int arr[], int left, int right);
	void selectionSort(int arr[], int size);
	int linearSearch(int arr[], int size, int userInput);
	void bubbleSort(int* arr, int size);

	#ifdef __cplusplus
}
#endif

#endif
