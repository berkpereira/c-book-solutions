//
//  prj6.c
//  
//
//  Created by Gabriel Pereira on 19/08/2021.
//

// Program acts as a "B1FF filter" - user inputs a sentence, and the program outputs the prototypical internet newbie version of the sentence (e.g. "hey, dude, C is cool" -> "H3Y, DUD3, C I5 C00L!!!!!!!!")

#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100 // Can easily change max input message length by using this macro

int main(void) {
	int i = 0, ch = 0, message[MAX_SIZE] = {0}; // Set all message elements to 0
	
	// Present program to user
	printf("\nThis program will take in a message and output the same message put through a \"B1FF filter\"\n");
	
	// Take in input
	printf("Enter message: ");
	while ((ch = getchar()) != '\n') { // Stop reading at the point where user presses Enter
		message[i] = ch;
		i++;
	}
	
	// Display output
	printf("In B1FF-speak: ");
	
	for (i = 0; message[i] != 0; i++) { // Iterate through each input character
		
		message[i] = toupper(message[i]); // Convert all to uppercase
		
		// switch statement handles all the character substitutions
		switch (message[i]) {
			case ' ':
				if (message[i-1] != ' ') {// Print a space only if the previous character was not a space (effectively reduces excess spaces)
					printf(" ");
				}
				break;
			case 'A':
				printf("4");
				break;
			case 'B':
				printf("8");
				break;
			case 'E':
				printf("3");
				break;
			case 'I':
				printf("1");
				break;
			case 'O':
				printf("0");
				break;
			case 'S':
				printf("5");
				break;
			default:
				printf("%c", message[i]);
				break;
		}
	}
	printf("!!!!!!!!!!!!\n"); // A few !'s at the end for good measure
	
	return 0;
}
	
	
