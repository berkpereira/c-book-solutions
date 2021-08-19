//
//  prj13.c
//  
//
//  Created by Gabriel Pereira on 18/08/2021.
//

// This program determines the average word length of a sentence entered by the user

#include <stdio.h>

int main(void) {
	
	char ch;
	int no_words = 0, no_letters = 0;
	
	
	// Present program to user
	printf("\nThis program takes in a sentence and outputs its average word length\n");
	
	
	// Get user input
	printf("Enter a sentence (without puncuation): ");
	
	
	// Initialise ch / start reading input
	ch = getchar();
	
	
	// Loop that ends at the end of the line
	// Each iteration of the loop increments no_words by 1
	while ( ch != '\n' ) {
		
		// 1st character read is a blankspace
		if ( ch == ' ' ) {
			// Skip all consecutive blankspaces
			while ( ch == ' ' ) {
				ch = getchar();
				;
			}
		}
		
		// At this point ch is NOT a blankspace
		
		// In case we've skipped blankspaces only to arrive at a \n (e.g. user enters 'hello there   '), break statement is included here
		// so that we don't reach the end of the outermost while loop (where we would wrongfully increment no_words)
		if ( ch == '\n' )
			break;
		
		// If we've reached this point, we are beginning to read a new word
		// Loop ends at the next blankspace encountered
		while ( ch != ' ') {
			
			// if statement to break the loop if \n comes right after last letter (otherwise no_letters would be wrongfully incremented before this while loop's condition was able to prevent it)
			if ( ch == '\n' )
				break;
			else {
				no_letters++;
				ch = getchar(); // Keep on reading
			}
		}
		
		// If we've reached this point, a new word has just been read
		no_words++;
	}
	
	
	// Finally, present result ( avg word length = no_letters / no_words )
	printf("Average number of letters per word: %.1f\n", (float) no_letters / no_words);
	
	return 0;
}
