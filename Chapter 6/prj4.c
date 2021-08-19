//
//  prj4.c
//  
//
//  Created by Gabriel Pereira on 16/08/2021.
//

// Program simulates potential share transaction through a fictional broker
// User can input however many transaction values he wants and check the commission the broker would take in each one

#include <stdio.h>

int main(void) {
	
	float transaction, commission;
	
	
	// Present program to user
	printf("\nProgram lets you consult the commission of a fictional broker for a potential transaction, given its value input\n");
	
	
	// Set up infinite loop to be broken out of by user command
	for (;;) {
		printf("Enter value of trade ($) (enter 0 to quit): ");
		scanf("%f", &transaction);
		
		if (transaction <= 0.00f) { // User gives quitting command
			return 0;
		} // Now for the actual commission computation
		else if (transaction < 2500.00f) {
			commission  = 30.00f + .017 * transaction;
		}
		else if (transaction < 6250.00f) {
			commission = 56.00f + .0066f * transaction;
		}
		else if (transaction < 20000.00f) {
			commission = 76.00f + .0034f * transaction;
		}
		else if (transaction < 50000.00f) {
			commission = 100.00f + .0022f * transaction;
		}
		else if (transaction <= 500000.00f) {
			commission = 155.00f + .0011f * transaction;
		}
		else if (transaction > 500000.00f) {
			commission = 255.00f + .0009f * transaction;
		}
		else {
			printf("Invalid inputs given\n");
			continue;
		}
		
		
		// Broker minimum commission is $39
		if (commission < 39.00f) {
			commission = 39.00f;
		}
		
		
		// Display results
		printf("Broker commission ($): %.2f\n", commission);
	}
	
	return 0;
}
