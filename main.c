#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Searching/Binary_Search/binarySearch.h"
#include "Sorting/Merge_Sort/mergeSort.h"


int targetElement();
int binarySearch(int arr[], int size, int userInput);

void mergeSort(int arr[], int left, int right);
void merge(int arr[], int left, int mid, int right);
void printArray(int arr[], int size);

int main(void)
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));
    if(arr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    // Seed the random number generator
    srand(time(NULL));

    // Generate random numbers and fill the array
    printf("Generated array: ");
    for(int i = 0; i < size; i++){
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
    }
    printf("\n");

    clock_t start_sort = clock();
    
    // Sort the array using merge sort
    mergeSort(arr, 0, size - 1);

    clock_t end_sort = clock();
    

    double time_taken_merge = ((double) (end_sort - start_sort)) / CLOCKS_PER_SEC * 1000;

    printf("The sorted array is: ");
    printArray(arr,size);

    printf("\nTime taken to sort the array was %f seconds\n", time_taken_merge);

    int userInput = targetElement();

    clock_t start_search = clock();
    
    // Search for an element using Binary Search
    int result = binarySearch(arr, size, userInput);

    clock_t end_search = clock();

    double time_taken_Binary = ((double) (end_search - start_search)) / CLOCKS_PER_SEC * 1000;
    
    printf("\nTime taken to search the element was %f seconds\n", time_taken_Binary);


    if(result != -1){
        printf("Using Binary Search, your element %d was found at index %d. \n", userInput, result);
    }
    else{
        printf("Element %d was not found in the array. \n", userInput);
    }

    free(arr);

    return 0;
}


// target element
int targetElement()
{
    int target;
    printf("Enter an element you want to search: ");
    scanf("%d", &target);
    return target;
}


// printArray
void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}