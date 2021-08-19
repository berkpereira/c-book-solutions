//
//  prj1.c
//  
//
//  Created by Gabriel Pereira on 17/08/2021.
//

// This script is simply used to determine how many bits short, int and long types take up in my machine's memory

#include <stdio.h>

int main(void) {
	
	short int i, n;
	
	printf("This program prints a table of squares.\n");
	printf("Enter a number of entries in table: ");
	scanf("%hd", &n);
	
	for (i = 1; i <= n; i++) {
		printf("%-10hd%-10hd\n", i, i * i);
	}
	
	
	// Have concluded:
	// short takes 16 bits
	// int takes 32 bits
	// long takes 64 bits
	
	
	return 0;
}
