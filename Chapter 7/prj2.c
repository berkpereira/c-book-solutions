	//
//  prj2.c
//  
//
//  Created by Gabriel Pereira on 17/08/2021.
//

#include <stdio.h>

int main(void) {
	
	int i, n;
	
	
	// Present program to user
	printf("This program prints a table of squares.\n");
	printf("Enter a number of entries in table: ");
	scanf("%d", &n);
	
	
	// Set up square-calculating loop
	for (i = 1; i <= n; i++) {
		printf("%-10d%-10d\n", i, i * i);
		
		// Requirement to stop every 24 squares and ask for user permission to continue
		if (i % 24 == 0) {
			printf("\nPress Enter to continue.\n");
			
			// Infinite loop only to stop when getchar returns a newline character i.e. only when user presses Enter
			while (getchar() != '\n')
				;
		}
	}
	
	
	return 0;
}
