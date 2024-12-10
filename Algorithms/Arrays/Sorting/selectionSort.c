int selectionSort (int arr[], int size, int count) {
	for (int i = 0; i < size - 1; i++){
		int min = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[ min ] > arr[ j ]) {
				min = j;
			}
		}

		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
		count++;
	}
	return count;
}
