//
//  prj10.c
//  
//
//  Created by Gabriel Pereira on 15/08/2021.
//

// Program takes in numerical grade and outputs letter grade (using switch statement)

#include <stdio.h>

int main(void) {
	
	int grade;
	
	
	// Get user grade input
	printf("Enter a numerical grade (0-100): ");
	scanf("%d", &grade);
	
	
	// Test for out of bounds inputs
	if (grade < 0 || grade > 100) {
		printf("Illegal grade\n");
		return 0;
	}
	
	
	// Start of output equivalent for all grades
	printf("Letter grade: ");
	
	
	// Use switch statement and int division to check which group grade belongs to, then display result
	switch (grade / 10) {
		case 10:
		case 9:
			printf("A\n");
			break;
		case 8:
			printf("B\n");
			break;
		case 7:
			printf("C\n");
			break;
		case 6:
			printf("D\n");
			break;
		default:
			printf("F\n");
			break;
	}
	
	return 0;
}
