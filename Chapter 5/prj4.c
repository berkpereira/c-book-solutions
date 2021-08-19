//
//  prj4.c
//  
//
//  Created by Gabriel Pereira on 15/08/2021.
//

// Program takes in wind speed (knots) and outputs corresponding simplified Beaufort scale description

#include <stdio.h>

int main(void) {
	
	float wind_speed;
	
	// Get wind speed input
	printf("Enter wind speed (knots, absolute value): ");
	scanf("%f", &wind_speed);
	
	
	// Test value of wind speed input and print the Beaufort description
	if (wind_speed < 0.0f) {
		printf("Error: Negative wind speed given\n");
	}
	else if (wind_speed < 1.0f) {
		printf("Beaufort scale description: Calm\n");
	}
	else if (wind_speed < 4.0f) {
		printf("Beaufort scale description: Light Air\n");
	}
	else if (wind_speed < 28.0f) {
		printf("Beaufort scale description: Breeze\n");
	}
	else if (wind_speed < 48.0f) {
		printf("Beaufort scale description: Gale\n");
	}
	else if (wind_speed <= 63.0f) {
		printf("Beaufort scale description: Storm\n");
	}
	else {
		printf("Beaufort scale description: Hurricane\n");
	}
	
	return 0;
}
