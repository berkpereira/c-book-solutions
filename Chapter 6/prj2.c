//
//  prj2.c
//  
//
//  Created by Gabriel Pereira on 16/08/2021.
//

// Program takes 2 positive integers from user and outputs their greatest common divisor

#include <stdio.h>

int main(void) {
	
	int m, n, remainder;
	
	
	// Present program to user
	printf("\nProgram takes 2 positive integers as input and outputs their greatest common divisor (GCD)\n\n");
	
	
	// Take user input
	printf("Enter two positive integers: ");
	scanf("%d %d", &m, &n);
	
	
	// Euclid's algorithm in a while loop
	while (n != 0) {
		remainder = m % n;
		m = n, n = remainder;
	}
	
	
	// Display result
	printf("The GCD is %d\n\n", m);
	
	return 0;
}
