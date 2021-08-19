//
//  prj3.c
//  
//
//  Created by Gabriel Pereira on 14/08/2021.
//

// Program takes 3 digit integer and outputs reversed integer (this time without using arithmetic, as in prj2.c)

#include <stdio.h>

int main(void)
{
	int digit1, digit2, digit3;
	
	// Get input integer
	printf("Enter a 3 digit integer: ");
	scanf("%1d%1d%1d", &digit1, &digit2, &digit3);
	
	// Output reversed integer
	printf("The reversed integer is %d%d%d\n", digit3, digit2, digit1);
	
	return 0;
}
