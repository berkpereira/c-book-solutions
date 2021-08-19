//
//  prj12.c
//  
//
//  Created by Gabriel Pereira on 17/08/2021.
//

// Program solves basic float-based expressions
// Supports 4 binary operations: +, -, *, /
// The expression is evaluated from left to right (no operator takes precedence over any other)

#include <stdio.h>

int main(void) {
	
	char operator, ch;
	float operand1, operand2;
	
	
	// Present program to user
	printf("\nThis program evaluates any expression as long as the operands are floats and the binary operations used are +, -, * and /.\n");
	
	
	// Get user input
	printf("Enter an expression: ");
	
	
	// In the first evaluation, 3 objects are read: operand1, operand2 and operator
	// Read first pair of operands along with operator character
	scanf("%f %c %f", &operand1, &operator, &operand2);
	
	
	// switch statement: operand 1 gets updated, since in the next evaluation the 1st operator will have been the output of the first evaluation
	switch (operator) {
		case '+':
			operand1 = operand1 + operand2;
			break;
		case '-':
			operand1 = operand1 - operand2;
			break;
		case '*':
			operand1 = operand1 * operand2;
			break;
		case '/':
			operand1 = operand1 / operand2;
			break;
		default:
			break;
	}
	
	
	// In subsequent evaluations only 2 objects are read: operand2 and operator; operand1 comes from the previous evaluation
	for (;;) {
		
		// Skip blankspaces
		while ( (ch = getchar()) == ' ' )
			;
		
		// When out of loop, if ch is newline, expression is over, otherwise we've found another operator and assigned it to operator
		if ( ch == '\n')
			break;
		else
			operator = ch;
		
		// Already read operator character, now only operand2 left to read
		scanf("%f", &operand2);
		
		// Same switch statement as before
		switch (operator) {
			case '+':
				operand1 = operand1 + operand2;
				break;
			case '-':
				operand1 = operand1 - operand2;
				break;
			case '*':
				operand1 = operand1 * operand2;
				break;
			case '/':
				operand1 = operand1 / operand2;
				break;
			default:
				break;
		}
	}

	
	// At the end, operand1 contains the final result
	printf("Result of expression: %f\n", operand1);
	
	return 0;
}
