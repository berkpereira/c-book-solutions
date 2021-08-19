//
//  prj11.c
//  
//
//  Created by Gabriel Pereira on 17/08/2021.
//

// Program takes in 2 names and formats them as Surname, Initial.

#include <stdio.h>
#include <ctype.h>

int main(void) {
	
	char ch, name_initial;
	_Bool surname_initial = 0;
	
	
	// Present program to user
	printf("\nThis program takes in 2 names and formats them as Surname, Initial.\n");
	
	
	// Get input
	printf("Enter a first name and a last name: ");
	
	
	// Skip blanks
	while ( (ch = getchar()) == ' ')
		;
	
	
	// At this point, ch is the first non-blank character, which will be stored into name_initial
	name_initial = toupper(ch);
	
	
	// Skip rest of first name, since it is not used in output
	while ( getchar() != ' ')
		;
	
	
	// Skip blanks (again)
	while ( (ch = getchar()) == ' ')
		;
	
	
	// Now read until the end of the line (surname) and write accordingly
	while ( ch != '\n' && ch != ' ') {
		
		// if statement body: capitalises first surname letter
		// capitalisation only carried out once by using _Bool surname_initial
		if ( surname_initial == 0 ) {
			printf("%c", toupper(ch));
			surname_initial++;
			ch = getchar();
		}
		else {
			printf("%c", tolower(ch));
			ch = getchar();
		}
	}
	
	
	// Finally, print the rest of the formatted name
	printf(", %c.\n", name_initial);
	
	return 0;
}
