//
//  prj6.c
//  
//
//  Created by Gabriel Pereira on 15/08/2021.
//

// Program takes in a product's UPC, then checks whether it's valid or invalid (whether the check digit is consistent or not)

#include <stdio.h>

int main(void) {
	
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, check;
	int first_sum, second_sum, total;
	
	
	// Take in UPC code input as a series of digits
	printf("Enter UPC first single digit: ");
	scanf("%1d", &d);
	printf("Enter UPC first group of 5 digits: ");
	scanf("%1d %1d %1d %1d %1d", &i1, &i2, &i3, &i4, &i5);
	printf("Enter UPC second group of 5 digits: ");
	scanf("%1d %1d %1d %1d %1d", &j1, &j2, &j3, &j4, &j5);
	printf("Enter UPC last single digit: ");
	scanf("%1d", &check);
	
	
	// Compute consistent check digit
	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;
	
	
	// Check whether input check digit is consistent and output answer
	if (check == (9 - ((total - 1) % 10))) {
		printf("UPC CODE VALID\n");
	}
	else {
		printf("UPC CODE INVALID\n");
	}
	
	
	return 0;
}
