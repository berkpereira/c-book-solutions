//
//  prj2.c
//  
//
//  Created by Gabriel Pereira on 18/08/2021.
//

// Program takes in a user-input number and counts the occurrences of each digit in that number (base 10)

#include <stdio.h>

int main(void) {
	int digit, digit_count[10] = {0}; // All array elements set to 0
	long n;
	
	// Present program to user
	printf("\nThis program will count the number of times each digit occurs in a user-input number.\n");
	
	// Get user input
	printf("Enter a number: ");
	scanf("%ld", &n);
	
	// Count digits in number
	while (n > 0) {
		digit = n % 10;
		digit_count[digit]++;
		n /= 10;
	}
	
	// Display results
	printf("Digit:\t\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\n");
	printf("Occurrences:\t");
	for (int i = 0; i < 10; i++)
		printf("%-8d",digit_count[i]);
	printf("\n");
	
	return 0;
}
