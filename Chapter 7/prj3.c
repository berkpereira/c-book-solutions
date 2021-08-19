//
//  prj3.c
//  
//
//  Created by Gabriel Pereira on 17/08/2021.
//

// Program sums a series of numbers (type double) input by user

#include <stdio.h>

int main(void) {
	
	double n, sum = 0;
	
	
	// Present program to user
	printf("This program sums a series of integers.\n");
	printf("Enter integers to sum (0 to terminate): ");
	scanf("%lf", &n);
	
	
	// Take in input until user enters 0
	while (n != .0f) {
		sum += n;
		scanf("%lf", &n);
	}
	
	
	// Display result
	printf("The sum is: %.4lf\n", sum);
	
	return 0;
}
