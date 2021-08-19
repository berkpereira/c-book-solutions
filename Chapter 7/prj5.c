//
//  prj5.c
//  
//
//  Created by Gabriel Pereira on 17/08/2021.
//

// Program takes in a word and calculates its value inside the SCRABBLE crossword game

#include <stdio.h>
#include <ctype.h>

int main(void) {
	
	char ch;
	int sum = 0;
	
	
	// Present program to user
	printf("\nThis program will take in a word and output its value in the SCRABBLE crossword game!\n");
	printf("Enter a word: ");
	
	
	// Loop uses each character from input up to newline character (when user presses Enter)
	while ( (ch = getchar() ) != '\n') {
		
		// Safeguard against whitespaces being summed as single-points in switch statement default case
		if (ch == ' ')
			continue;
		
		// Turn character into uppercase
		ch = toupper(ch);
		
		// Now check character against its face value
		// Since all letters have some face value and the face value with the most letters associated is 1, that will be the default case
		switch (ch) {
			case 'D': case 'G':
				sum += 2; break;
			case 'B': case 'C': case 'M': case 'P':
				sum += 3; break;
			case 'F': case 'H': case 'V': case 'W': case 'Y':
				sum += 4; break;
			case 'K':
				sum += 5; break;
			case 'J': case 'X':
				sum += 8; break;
			case 'Q': case 'Z':
				sum += 10; break;
			default:
				sum++; break;
		}
	}
	
	
	// Display sum
	printf("SCRABBLE value: %d\n", sum);
	
	return 0;
}
