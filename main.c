// #include <stdio.h>
// #include "Binary_Search/binarySearch.h"

// int targetElement();
// int binarySearch(int arr[], int size, int userInput);

// int main(void)
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     printf("The original array is: ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     // Ask for target element
//     int userInput = targetElement();

//     // Binary Search result
//     int result = binarySearch(arr, size, userInput);

//     if (result != -1)
//     {
//         printf("Using Binary Search, your element %d was found at index %d.\n", userInput, result);
//     }
//     else
//     {
//         printf("Element %d was not found in the array.\n", userInput);
//     }

//     return 0;
// }


// // target element
// int targetElement()
// {
//     int target;
//     printf("Enter an element you want to search: ");
//     scanf("%d", &target);
//     return target;
// }


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

    clock_t start = clock();
    
    // Sort the array using merge sort
    mergeSort(arr, 0, size - 1);

    clock_t end = clock();

    double time_taken = ((double) (end - start)) / CLOCKS_PER_SEC * 1000;

    printf("The sorted array is: ");
    printArray(arr,size);

    printf("\nTime taken to sort the array was %f \n", time_taken);

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