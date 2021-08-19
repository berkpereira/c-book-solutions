//
//  prj6.c
//  
//
//  Created by Gabriel Pereira on 17/08/2021.
//

// Program just used to check storage used by different numerical data types in my machine (64 bit machine)

#include <stdio.h>

int main(void) {
	
	short s;
	int i;
	long l;
	
	float f;
	double lf;
	long double llf;
	
	printf("\nshort int storage bytes: %zu\n", sizeof(s)); // 2 bytes = 16 bits
	printf("int storage bytes: %zu\n", sizeof(i)); // 4 bytes = 32 bits
	printf("long int storage bytes: %zu\n\n", sizeof(l)); // 8 bytes = 64 bits
	
	printf("float storage bytes: %zu\n", sizeof(f)); // 4 bytes = 32 bits
	printf("double storage bytes: %zu\n", sizeof(lf)); // 8 bytes = 32 bits
	printf("long double storage bytes: %zu\n\n", sizeof(llf)); // 16 bytes = 128 bits
	
	return 0;
}
