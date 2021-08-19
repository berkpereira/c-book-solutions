//
//  prj3.c
//  
//
//  Created by Gabriel Pereira on 18/08/2021.
//

// Program takes in any amount of integers from user and checks whether each one has repeated digits or not
// NOTE: this version of the program simply reads all of the numbers input by user up to the newline character (i.e. up to when user presses Enter); this is unlike what the book asks for, which was for the program to stop reading when it encountered a non-positive number

#include <stdio.h>
#include <stdbool.h>

int main(void) {
	bool digit_seen[10] = {false};
	int digit;
	long n, k;
	char ch;
	
	// Present program to user
	printf("\nThis program will count the number of times each digit occurs in any amount of user-input numbers.\n");
	
	// Get user input
	printf("Enter positive integers: ");
	
	for (;;) {
		// Read in a number
		scanf("%ld", &n);
		
		// Go through the check of each digit in the number
		k = n; // k variable used in the check; n is kept unchanged in order to print the result later on
		while (k > 0) {
			digit = k % 10;
			if (digit_seen[digit])
				break;
			digit_seen[digit] = true;
			k /= 10;
		}
		
		// Present result
		if (k > 0) // i.e. previous loop was prematurely broken out of
			printf("%ld HAS repeated digits\n", n);
		else
			printf("%ld DOES NOT HAVE repeated digits\n", n);
		
		// Skip blankspaces
		while ((ch = getchar()) == ' ')
			;
		
		// If at the end of previous loop ch == '\n', there are no more numbers left to read
		if (ch == '\n')
			break;
		
		// Program only reaches this point if there's still numbers left to read; since ch now stores a digit, we must replace that digit into the input buffer to be read by scanf as part of the next number in the next loop iteration
		ungetc(ch,stdin);
		
		// Reset digit_check array for next iteration of loop
		for (int i = 0; i < 10; i++)
			digit_seen[i] = false;
	}
	
	return 0;
}
