#include <stdio.h>
#include "Binary_Search/binarySearch.h"

int targetElement();
int binarySearch(int arr[], int size, int userInput);

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("The original array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Ask for target element
    int userInput = targetElement();

    // Binary Search result
    int result = binarySearch(arr, size, userInput);

    if (result != -1)
    {
        printf("Using Binary Search, your element %d was found at index %d.\n", userInput, result);
    }
    else
    {
        printf("Element %d was not found in the array.\n", userInput);
    }

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
