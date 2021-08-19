//
//  prj6.c
//  
//
//  Created by Gabriel Pereira on 16/08/2021.
//

// Program takes in user input integer n and displays all even squares up to n

#include <stdio.h>

int main(void) {
	
	int n;
	
	
	// Present program to user
	printf("\nThis program takes integer input n and outputs all even squares up to n\n");
	
	
	// Take in input
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	
	
	// Reject invalid inputs
	if (n <= 0) {
		printf("Invalid input given\n");
		return 0;
	}
	
	
	// Calculate required squares (note that i squared is even if and only if i is even)
	for (int i = 2; i * i <= n; i += 2) {
		printf("%d\n", i * i);
	}
	
	
	return 0;
}
