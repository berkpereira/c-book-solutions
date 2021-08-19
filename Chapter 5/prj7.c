//
//  prj7.c
//  
//
//  Created by Gabriel Pereira on 15/08/2021.
//

// Program finds smallest and largest of 4 integers entered by user

#include <stdio.h>

int main(void) {
	
	int num1, num2, num3, num4;
	
	// max1, min1, etc. will be used to test the 1st int against the 2nd and the 3rd against the 4th
	// Then those results will be compared between themselves to find the overall max and min out of all 4 integers
	// Sort of like a tournament of number size
	int max1, min1, max2, min2, max, min;
	
	
	// Get user input
	printf("Enter 4 different integers: ");
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
	
	
	// Test between first pair
	if (num1 > num2) {
		max1 = num1;
		min1 = num2;
	}
	else {
		max1 = num2;
		min1 = num1;
	}
	
	
	// Test between second pair
	if (num3 > num4) {
		max2 = num3;
		min2 = num4;
	}
	else {
		max2 = num4;
		min2 = num3;
	}
	
	
	// Test between max1 and max2
	if (max1 > max2) {
		max = max1;
	}
	else {
		max = max2;
	}
	
	
	// Test between min1 and min2
	if (min1 < min2) {
		min = min1;
	}
	else {
		min = min2;
	}
	
	
	// Display results
	printf("Smallest integer: %d\nLargest integer: %d\n", min, max);
	
	return 0;
}
