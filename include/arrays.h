#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#ifdef __cplusplus
extern "C" {
	#endif

	/*
	 * Arrays
	 */
	int binarySearch(int arr[], int size, int target, int *count);
	int linearSearch(int arr[], int size, int userInput, int *count);
	int mergeSort(int arr[], int left, int right, int *count);
	int selectionSort(int arr[], int size, int count);
	int bubbleSort(int* arr, int size, int count);
	int insertionSort(int arr[], int size, int count);

	#ifdef __cplusplus
}
#endif

#endif
