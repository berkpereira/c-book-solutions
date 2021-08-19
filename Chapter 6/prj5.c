//
//  prj5.c
//  
//
//  Created by Gabriel Pereira on 16/08/2021.
//

// Program takes in an integer and outputs its "reverse"

#include <stdio.h>

int main(void) {
	
	int input;
	
	
	// Present program to user
	printf("\nThis program takes an integer input and outputs the reversed integer\n");
	
	
	// Take in input
	printf("Enter an integer: ");
	scanf("%d", &input);
	
	
	// Start displaying results
	printf("Reversed integer: ");
	
	do {
		printf("%d", input % 10); // Take last digit and print it
		input /= 10; // "Eliminate" last digit
	} while (input != 0); // Repeat until left with 0
	
	printf("\n");
	
	return 0;
}
