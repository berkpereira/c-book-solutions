//
//  prj1.c
//  
//
//  Created by Gabriel Pereira on 16/08/2021.
//

// Program takes in however many positive numbers the user inputs, then displays the largest one entered

#include <stdio.h>

int main(void) {
	
	// Initialise largest number entered as 0
	float largest_num = 0, input;
	
	
	// Present purpose and use of program to user
	printf("\nThis program takes in numbers from user and displays the largest one entered at the end.\n\n");
	printf("To stop giving inputs, enter 0.\n\n");
	
	
	// Set up infinite loop for inputs, only broken when user enters a non positive number
	for (;;) {
		printf("Enter a number: ");
		scanf("%f", &input);
		
		if (input > 0) { // Valid input
			if (input > largest_num) {
				largest_num = input;
			}
		}
		else { // User enters a quitting command
			printf("The largest number entered was %.2f\n", largest_num);
			break;
		}
	}
	
	return 0;
}
