//
//  prj1.c
//  
//
//  Created by Gabriel Pereira on 15/08/2021.
//

// Program takes in integer with no more than 4 digits and outputs its number of digits

#include <stdio.h>

int main(void) {
	
	int input_num;
	
	// Take in input integer
	printf("Enter positive integer (with no more than 4 digits): ");
	scanf("%d", &input_num);
	
	
	if (input_num < 0) { // Error in case integer is negative
		printf("Error: %d is negative\n", input_num);
	}
	else if (input_num < 10) { // Now cases for the size of the integer given, up to 4 digits integers
		printf("%d is 1 digit long\n", input_num);
	}
	else if (input_num < 100) {
		printf("%d is 2 digits long\n", input_num);
	}
	else if (input_num < 1000) {
		printf("%d is 3 digits long\n", input_num);
	}
	else if (input_num < 10000) {
		printf("%d is 4 digits long\n", input_num);
	}
	else {
		printf("%d is out of required bounds\n", input_num);
	}
	
	return 0;
}
