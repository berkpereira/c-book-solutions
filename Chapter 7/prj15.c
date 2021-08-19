//
//  prj15.c
//  
//
//  Created by Gabriel Pereira on 18/08/2021.
//

// Program calculates n! for a user-input n
// Purpose of program is to play with what data type to use to store the factorial and see at which point overflow occurs with different data types

// (a) short - overflows at n = 8, n! = 40 320
// (b) int - overflows at n = 13, n! = 6 227 020 800
// (c) long - overflows at n = 21, n! = 5.109e19
// (d) long long - overflows at n = 21, n! = 5.109e19
// (e) float - overflows at n = 35, n! = 1.033e40 (displays inf instead)
// (f) double - overflows at n = 171, n! = ( ) (displays inf instead)
// (g) long double - overflows at n = 1755, n! = ( ) (displays inf instead)

#include <stdio.h>

int main(void) {
	
	int n;
	long double factorial = 1.0f;
	
	
	// Present program to user
	printf("\nThis program will (try to) calculate n! for any n you enter.\n");
	
	
	// Get user input
	printf("Enter n: ");
	scanf("%d", &n);
	
	
	// Calculate factorial iteratively
	for (int i = n; i > 1; i--)
		factorial *= i;
	
	
	// Display result
	printf("%d! = %Lf (hopefully...)\n", n, factorial);
	
	return 0;
}
