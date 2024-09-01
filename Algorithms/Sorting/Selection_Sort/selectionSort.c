/*void selectionSort (int arr[], int size) {*/
/*	for (int i = 0; i < size - 1; i++) {*/
/**/
/*		int currentSmallest = 0;*/
/**/
/*		if ( arr[i] > arr[i + 1] ) {*/
/*			currentSmallest = arr[i + 1];*/
/*		}*/
/**/
/*		int temp = arr[i];*/
/*		arr[i] = arr[i + 1];*/
/*		arr[i + 1] = temp;*/
/*	}*/
/*}*/
void selectionSort (int arr[], int size) {
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
	
	}
}
