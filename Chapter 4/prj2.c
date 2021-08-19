//
//  prj2.c
//  
//
//  Created by Gabriel Pereira on 14/08/2021.
//

// Program takes in 3 digit integer and outputs the "reversed" integer

#include <stdio.h>

int main(void)
{
	int num_in, digit1, digit2, digit3;
	
	// Get input integer
	printf("Enter a 3 digit integer: ");
	scanf("%d", &num_in);
	
	// Fetch individual integers
	digit3 = num_in % 10;
	digit2 = (num_in % 100) / 10; // For 2 and 3, num_11 % 100 helps us fetch the last 2 digits of the input and go from there
	digit1 = num_in / 100; // Truncation gives us the first input digit here
	
	// Output reversed integer
	printf("The reversed integer is %d%d%d\n", digit3, digit2, digit1);
	
	return 0;
}
