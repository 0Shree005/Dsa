#include <stdio.h>

int binarySearch(int arr[], int size, int userInput)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + ((end - start) / 2);

        if (userInput == arr[mid])
        {
            return mid;
        }
        else if (userInput < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return -1;
}
