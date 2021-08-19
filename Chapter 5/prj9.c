//
//  prj9.c
//  
//
//  Created by Gabriel Pereira on 15/08/2021.
//

// Program takes in 2 dates from user and outputs whichever one is earliest in the calendar

#include <stdio.h>

int main(void) {
	
	// Self explanatory variables
	int day1, day2, month1, month2, year1, year2, earliest_date;
	
	
	// Get user input
	printf("Enter first date (dd/mm/yyyy): ");
	scanf("%d / %d / %d", &day1, &month1, &year1);
	
	printf("Enter second date (dd/mm/yyyy): ");
	scanf("%d / %d / %d", &day2, &month2, &year2);
	
	
	// Logical tests to determine which date is first
	if (year1 != year2) {
		if (year1 < year2) {
			earliest_date = 1;
		}
		else {
			earliest_date = 2;
		}
	}
	else if (month1 != month2) {
		if (month1 < month2) {
			earliest_date = 1;
		}
		else {
			earliest_date = 2;
		}
	}
	else if (day1 != day2) {
		if (day1 < day2) {
			earliest_date = 1;
		}
		else {
			earliest_date = 2;
		}
	}
	else {
		earliest_date = 0; // If none of the date parameters are found to be different, they must be the same date, 0 used for this case
	}
	
	
	// Display results
	if (earliest_date) { // earliest_date is nonzero
		if (earliest_date == 1) {
			printf("First date entered is earliest\n");
		}
		else {
			printf("Second date entered is earliest\n");
		}
	}
	else { // earliest_date is 0 -> same date was input twice
		printf("Same date was entered twice\n");
	}
	
	return 0;
}
