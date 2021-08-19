//
//  prj4.c
//  
//
//  Created by Gabriel Pereira on 14/08/2021.
//

#include <stdio.h>

int main(void)
{
	int input_num, oct1, oct2, oct3, oct4, oct5;
	
	// Get user input (base 10)
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &input_num);
	
	// Get base 8 digits, from last to first
	oct5 = input_num % 8; input_num /= 8; // Input number variable value is changed at this point
	oct4 = input_num % 8; input_num /= 8;
	oct3 = input_num % 8; input_num /= 8;
	oct2 = input_num % 8; input_num /= 8;
	oct1 = input_num % 8;
	
	// Display output base 8 number
	printf("In octal, your number is: %d%d%d%d%d\n", oct1, oct2, oct3, oct4, oct5);
	
	return 0;
}
