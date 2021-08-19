//
//  prj4.c
//  
//
//  Created by Gabriel Pereira on 18/08/2021.
//

// This program takes in N numbers from user and displays them in reverse order (relative to the input order)

#include <stdio.h>
#define N 10
#define ARRAY_SIZE (int) (sizeof(a) / sizeof(a[0]))

int main(void) {
	int a[N], i;
	
	// Present program to user
	printf("\nThis program takes in N numbers from user and displays them in reverse order (relative to the input order)\n");
	
	// Get user input and store in array
	printf("Enter %d numbers: ", ARRAY_SIZE);
	for (i = 0; i < ARRAY_SIZE; i++)
		scanf("%d", &a[i]);
	
	// Display results: loop prints elements from array, starting to index them from the end of the array and ending at the beginning, hence the reverse order
	printf("In reverse order:");
	for (i = ARRAY_SIZE - 1; i >= 0; i--)
		printf(" %d", a[i]);
	printf("\n");
	
	return 0;
}
