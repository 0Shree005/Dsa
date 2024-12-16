int linearSearch(int arr[], int size, int target, int *count) {
	for(int i = 0; i < size; i++) {
		(*count)++;
		if(target == arr[i]) {
			return i;
		}
	}
	return -1;
}
