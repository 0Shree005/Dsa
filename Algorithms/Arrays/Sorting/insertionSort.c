int insertionSort(int arr[], int size, int count){
	for (int i = 1; i < size; i++){
		
		int key = arr[i];
		int j = i - 1;
		
		while (j >= 0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j--;
			count++;
		}
		arr[j + 1] = key;
	}
	return count;
}
