//
//  prj6.c
//  
//
//  Created by Gabriel Pereira on 14/08/2021.
//

// Program takes in two fractions and outputs their sum

#include <stdio.h>

int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	
	// Take in input
	printf("Enter fraction sum (format a/b + c/d): ");
	scanf("%d / %d + %d / %d", &num1, &denom1, &num2, &denom2);
	
	// General way to take fractions to the same denominator to then add numerators
	// Does not usually lead to most simplified version of the fraction (lowest terms)
	result_num = (num1 * denom2) + (num2 * denom1);
	result_denom = denom1 * denom2;
	
	// Output result
	printf("Sum of fractions: %d/%d\n", result_num, result_denom);
	
	return 0;
}
