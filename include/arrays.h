#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#ifdef __cplusplus
extern "C" {
	#endif

	/*
	 * Arrays
	 */
	int binarySearch(int arr[], int size, int target);
	int linearSearch(int arr[], int size, int userInput);
	void mergeSort(int arr[], int left, int right);
	void selectionSort(int arr[], int size);
	void bubbleSort(int* arr, int size);
	void insertionSort(int arr[], int size);

	#ifdef __cplusplus
}
#endif

#endif
