#include <stdio.h>
#include <stdlib.h>

#include "ll.h"

void freeLL(node** head) {

	/*int count = 0;*/
	while( *head != NULL ) {
		node* temp;

		temp = *head;
		*head = ( *head ) -> next;
		free(temp);
		/*count++;*/
	}
	/*printf("freell was called, and freed %d nodes.\n", count);*/

}
