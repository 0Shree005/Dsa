#include <stdlib.h>

void merge(int arr[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));

    for(int i = 0; i < n1; i++){
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++){
        R[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i< n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }

    free(L);
    free(R);
}

void mergeSort(int arr[], int left, int right, int *count){
    (*count)++;
    if (left < right){
        int mid = left + ((right - left ) / 2);

        mergeSort(arr, left, mid, count);
        mergeSort(arr, mid + 1, right, count);
        merge(arr, left, mid, right);
    }
}
