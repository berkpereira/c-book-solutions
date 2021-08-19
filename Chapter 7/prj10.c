//
//  prj10.c
//  
//
//  Created by Gabriel Pereira on 17/08/2021.
//

// Program takes in character string and outputs number of vowels contained in it

#include <stdio.h>
#include <ctype.h>

int main(void) {
	
	int no_vowels = 0;
	char ch;
	
	
	// Present program to user
	printf("\nThis program takes in a character string and outputs how many vowels are in it\n");
	
	
	// Get user input
	printf("Enter a sentence: ");
	
	
	// Read characters until Enter is pressed
	// switch statement updates no_vowels variable in case a vowel is read
	while ( ( ch = toupper(getchar()) ) != '\n' ) {
		switch (ch) {
			case 'A': case 'E': case 'I': case 'O': case 'U':
				no_vowels++;
				break;
			default:
				break;
		}
	}
	
	
	// Display result
	printf("Your sentence contains %d vowels\n", no_vowels);
	
	return 0;
}
