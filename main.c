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

    int sortingChoice;
    printf("Choose sorting algorithm -\n");
    printf("1. Merge Sort\n");
    printf("Enter your choice of algorithm: ");
    scanf("%d", &sortingChoice);

    clock_t start_sort = clock();
    switch (sortingChoice){
        case 1:
            // Sort the array using merge sort
            mergeSort(arr, 0, size - 1);
            break;
        default:
            printf("Invalid choice for sorting algorithm.\n");
            free(arr);
            return 1;
    }
    
    clock_t end_sort = clock();
    

    double time_taken_merge = ((double) (end_sort - start_sort)) / CLOCKS_PER_SEC;

    printf("The sorted array is: ");
    printArray(arr,size);

    printf("\nTime taken to sort the array was %f seconds\n", time_taken_merge);

    int searchChoice;
    printf("Choose searching algorithm:\n");
    printf("1. Binary Search\n");
    printf("Enter your choice: ");
    scanf("%d", &searchChoice);

    int userInput = targetElement();

    clock_t start_search = clock();
    int result;

    switch (searchChoice) {
        case 1:
            // Search for an element using Binary Search
            result = binarySearch(arr, size, userInput);
            break;
        default:
            printf("Invalid choice for searching algorithm.\n");
            free(arr);
            return 1;
    }


    clock_t end_search = clock();

    double time_taken_Binary = ((double) (end_search - start_search)) / CLOCKS_PER_SEC;
    
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