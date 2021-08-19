//
//  prj3.c
//  
//
//  Created by Gabriel Pereira on 16/08/2021.
//

// Program takes in a fraction and reduces it to its lowest terms
// Makes use of Euclid's algorithm (used in prj2.c in this directory) to calculate GCD

#include <stdio.h>

int main(void) {
	
	int m, n, num, denom, remainder;
	
	
	// Present program to user
	printf("\nThis program takes a fraction and displays it in its lowest terms\n\n");
	
	
	// Take in user input
	printf("Enter a fraction: ");
	scanf("%d / %d", &num, &denom);
	
	
	// Insert inputs into variables used in GCD computation
	m = num;
	n = denom;
	
	
	// Euclid's GCD algorithm
	while (n != 0) {
		remainder = m % n;
		m = n, n = remainder;
	} // By the end, m is the GCD
	
	
	// Display results
	printf("Your fraction in lowest terms: %d/%d\n", num / m, denom / m);
	
	return 0;
}
