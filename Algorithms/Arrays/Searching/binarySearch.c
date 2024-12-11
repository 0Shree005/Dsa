int binarySearch(int arr[], int size, int userInput, int count)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        count++;

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

    /*return ( count, -1 );*/
    return -1;
}
