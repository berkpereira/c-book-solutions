//
//  prj10.c
//  
//
//  Created by Gabriel Pereira on 16/08/2021.
//

// Program takes in any number of dates from the user and outputs whichever one is earliest

#include <stdio.h>

int main(void) {
	
	int new_day, new_month, new_year, min_day, min_month, min_year, new_earliest_date = 0;
	
	
	// Present program to user
	printf("\nThis program takes in any amount of dates you want and then displays the earliest one entered\n\n");
	
	
	// Fetch first date
	printf("Enter a date (dd/mm/yyyy): ");
	scanf("%d / %d / %d", &min_day, &min_month, &min_year); // At least for now, this is the earliest there is
	
	
	// Infinite loop to be broken out of by user command
	for (;;) {
		
		// Fetch another date
		printf("Enter a date (dd/mm/yyyy) (0/0/0 to quit): ");
		scanf("%d / %d / %d", &new_day, &new_month, &new_year);
		
		
		// If user inputs quitting command
		if (new_day + new_month + new_year == 0)
			break;
		
		
		// Check whether new date is earlier than the current earliest date recorded
		if (new_year != min_year) {
			if (new_year < min_year) {
				new_earliest_date = 1;
			}
		}
		else if (new_month != min_month) {
			if (new_month < min_month) {
				new_earliest_date = 1;
			}
		}
		else if (new_day != min_day) {
			if (new_day < min_day) {
				new_earliest_date = 1;
			}
		}
		
		
		// Actually fetch year, month and date information from the earliest of the 2 dates
		if (new_earliest_date == 1) {
			min_year = new_year;
			min_month = new_month;
			min_day = new_day;
		}
		
		
		// Reset the boolean counter before next iteration of loop
		new_earliest_date = 0;
	}
	
	
	// Display results
	printf("The earliest date entered was %.2d/%.2d/%d\n", min_day, min_month, min_year);
	
	return 0;
}
