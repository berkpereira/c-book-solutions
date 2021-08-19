//
//  prj11.c
//  
//
//  Created by Gabriel Pereira on 16/08/2021.
//

// Program approximates e using its infinite series (Taylor expansion) definition to a user-specified number of terms

#include <stdio.h>

int main(void) {
	
	int factorial = 1, n;
	float result;
	
	
	// Present program to user
	printf("\nThis program approximates e using its Taylor expansion definition to however many terms you like\n\n");
	
	
	// Take in user input
	printf("How many terms do you want to be added up? ");
	scanf("%d", &n);
	
	
	// Cover edge cases that would make later loops trickier to implement
	if (n == 0) {
		result = 0.00f;
		goto display;
	}
	if (n == 1) {
		result = 1.00f;
		goto display;
	}
	
	n--; // User wants to see 4 terms (for example), so we will compute factorials up to 3!
	
	
	// Note that we only get here if user wants to see 2 or more terms
	result = 1.00f;
	for (int i = 1 ; i <= n; i++) {
		for (int j = i ; j > 1; j--) {
			factorial *= j;
		}
		result += (1.00f / factorial);
		factorial = 1; // Reset factorial variable to be used in next iteration
	}
	
	
	// Display results
display: printf("The resulting approximation of e is %.12f\n", result);
	
	return 0;
}
