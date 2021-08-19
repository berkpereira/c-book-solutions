//
//  prj12.c
//  
//
//  Created by Gabriel Pereira on 16/08/2021.
//

// Program approximates e using its Taylor expansion definition, adding terms until the current term becomes smaller than a user-defined epsilon

#include <stdio.h>

int main(void) {
	
	int factorial = 1;
	float epsilon, new_term, result;
	
	
	// Present program to user
	printf("\nThis program approximates e using its Taylor expansion definition until the last term added is smaller than your chosen epsilon value\n\n");
	
	
	// Take in user input
	printf("Enter an epsilon value: ");
	scanf("%f", &epsilon);
	
	
	// Cover edge cases that would make later loops trickier to implement
	if (epsilon > 1) {
		result = 1.00f;
		goto display;
	}
	
	
	// Set up infinite loop only to break when new term to add is smaller than epsilon
	result = 1.00f;
	for (int i = 1 ; ; i++) {
		
		for (int j = i ; j > 1; j--) {
			factorial *= j;
		}
		
		new_term = (1.00f / factorial);
		result += new_term;
		
		if (new_term < epsilon) // Loop breaking condition
			break;
		
		factorial = 1; // Reset factorial variable to be used in next iteration
	}
	
	
	// Display results
display: printf("The resulting approximation of e is %.12f\n", result);
	
	return 0;
}
