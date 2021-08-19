//
//  prj4.c
//  
//
//  Created by Gabriel Pereira on 17/08/2021.
//

// Program takes in phone number with both numeric and non-numeric characters and converts it into numeric characters only (letter to digit correspondence as in a phone dial; program assumes ASCII character set)

#include <stdio.h>

int main(void) {
	
	char ch;
	int digit;
	
	
	// Present program to user
	printf("\nThis program takes in a phone number with both numeric and non-numeric characters, then displays with the letters converted into digits (as in a phone dial)\n");
	
	
	// Take in user input
	printf("Enter phone number: ");
	
	
	// Set up character reading loop until user presses Enter
	while ( (ch = getchar()) != '\n') {
		
		// We'll start by ignoring any whitespaces left by user
		if (ch == 32)
			continue;
		
		// First, convert any lower case letters into uppercase (assume ASCII)
		if (ch >= 97 && ch <= 122) {
			ch -= 32;
		}
		
		// Now convert any letters read into their corresponding digits
		if (ch >= 65 && ch <= 89) { // 89 goes up to Y, Z is not included here
			digit = ((ch + 1) / 3) - 20;
			printf("%d", digit);
		}
		
		else {
			printf("%c", ch);
		}
	}
	
	printf("\n");
	
	return 0;
}
