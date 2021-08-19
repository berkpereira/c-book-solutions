//
//  prj6.c
//  
//
//  Created by Gabriel Pereira on 17/08/2021.
//

// This program computes an approximation of the square root of a user input number using Newton's method

#include <stdio.h>
#include <math.h>

int main(void) {

	// This iterative root-finding algorithm requires an initial "guess" at the solution; here, y = 1 will be that guess
	double x, y = 1, y_new, old_new_dif;
	
	
	// Present program to user
	printf("\nThis program will compute the approximate square root of the number you input (using Newton's method)\n");
	
	
	// Get user input
	input:
	printf("Enter a positive number: ");
	scanf("%lf", &x);
	
	
	// Keep taking user input until input is valid (positive)
	if (x <= 0) {
		printf("\nError: user input non-positive number!\n");
		goto input;
	}
	
	
	// Keep running iterative algorithm until old_new_dif < (.00001 * y)
	do {
		y_new = (y + x/y) / 2; // Formula for new value of y
		old_new_dif = fabs(y_new - y); // Compare new and old values of y
		y = y_new; // Update y
	} while (old_new_dif >= (.00001 * y));
	
	
	// Display result
	printf("Approximate square root of %.4lf: %.6lf\n", x, y);
	
	return 0;
}
