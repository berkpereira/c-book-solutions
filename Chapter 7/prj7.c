//
//  prj7.c
//  
//
//  Created by Gabriel Pereira on 17/08/2021.
//

// Program executes basic binary operations on 2 user-input fractions

#include <stdio.h>

int main(void) {
	
	char operator;
	int num1, denom1, num2, denom2, result_num, result_denom;
	int m, n, remainder;
	
	
	// Present program to user
	printf("\nThis program will execute a basic arithmetic operation on 2 fractions input by user\n");
	
	
	// Take in input
	input:
	printf("Enter fraction operation (format a/b *operator* c/d): ");
	scanf("%d / %d %c %d / %d", &num1, &denom1, &operator, &num2, &denom2);
	
	
	// Carry out different operation algorithms depending on operator character input
	switch (operator) {
		case '+':
			result_num = (num1 * denom2) + (num2 * denom1);
			result_denom = denom1 * denom2;
			break;
		case '-':
			result_num = (num1 * denom2) - (num2 * denom1);
			result_denom = denom1 * denom2;
			break;
		case '*':
			result_num = num1 * num2;
			result_denom = denom1 * denom2;
			break;
		case '/':
			result_num = num1 * denom2;
			result_denom = denom1 * num2;
			break;
		default: // In case no valid operator was read, try taking input again
			printf("Invalid input (valid operators: +, -, *, /).\n\n");
			goto input;
	}
	
	
	// Insert (not simplified) results into variables used in GCD computation
	// Required because m and n will be updated throughout algorithm; resulting num and denom would be lost by the end without these new variables
	m = result_num;
	n = result_denom;
	
	
	// Euclid's GCD algorithm
	while (n != 0) {
		remainder = m % n;
		m = n, n = remainder;
	} // By the end, m is the GCD
	
	
	// Display results
	printf("Result (in lowest terms): %d/%d\n", result_num /= m, result_denom /= m);
	
	return 0;
}
