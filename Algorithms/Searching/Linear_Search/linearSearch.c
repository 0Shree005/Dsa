int linearSearch(int arr[], int size, int userInput) {
	for(int i = 0; i < size; i++) {
		if(userInput == arr[i]) {
			return i;
		}
	}
	return -1;
}
