//
//  prj5.c
//  
//
//  Created by Gabriel Pereira on 19/08/2021.
//

// Program takes in an interest and a number of years and shows the value of 100$ each year, while compounding interest monthly

#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0]))) // Corresponds to the number of different interest rates in the output
#define INITIAL_BALANCE 100.00

int main(void) {
	int i, low_rate, num_years, year, month;
	double value[5]; // Can adjust the length of this array without worrying about anything else (macros will do the job of adjusting the program accordingly)
	
	// Present program to user
	printf("\nThis program takes in an interest and a number of years and shows the value of 100$ each year, while compounding interest monthly\n");
	
	// Take input
	printf("Enter integer interest rate: ");
	scanf("%d", &low_rate);
	printf("Enter number of years: ");
	scanf("%d", &num_years);
	
	// Print header row
	printf("\nYears");
	for (i = 0; i < NUM_RATES; i++) {
		printf("%10d%%", low_rate + i);
		value[i] = INITIAL_BALANCE;
	}
	printf("\n");
	
	// Print results
	for (year = 1; year <= num_years; year++) {
		printf("%3d    ", year); // Print year no.
		for (i = 0; i < NUM_RATES; i++) {
			for (month = 1; month <= 12; month++) // Compute with interest compounded monthly over a year
				value[i] += ((low_rate + i) / 12.0) / 100.0 * value[i];
			printf("%11.2lf", value[i]); // Each element in value corresponds to a DIFFERENT INTEREST RATE; over each loop iteration, each element gets updated with interest compounded over another year
		}
		printf("\n");
	}
	
	return 0;
}
