//
//  prj8.c
//  
//
//  Created by Gabriel Pereira on 15/08/2021.
//

// Program takes in 24h time from user, then outputs departure and arrival time of scheduled flight closest to user input

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int hour, minute, min_time; // min_time corresponds to user-input in minutes from midnight
	int dep_hour, dep_min, arr_hour, arr_min, min_dist = 1440, dep_pm = 0, arr_pm = 0; // min_dist initialised as the number of minutes in a day; dep_pm and arr_pm will serve as boolean values
	
	
	// Get user time input
	printf("Enter 24h time (hh:mm): ");
	scanf("%d : %d", &hour, &minute);
	min_time = hour * 60 + minute;
	
	
	// Testing for which flight departure is closest to user input time
	if (abs(min_time - (8 * 60 + 0)) < min_dist) {
		dep_hour = 8; dep_min = 0;
		arr_hour = 10; arr_min = 16;
		min_dist = abs(min_time - (8 * 60 + 0));
	}
	
	if (abs(min_time - (9 * 60 + 43)) < min_dist) {
		dep_hour = 9; dep_min = 43;
		arr_hour = 11; arr_min = 52;
		min_dist = abs(min_time - (9 * 60 + 43));
	}
	
	if (abs(min_time - (11 * 60 + 19)) < min_dist) {
		dep_hour = 11; dep_min = 19;
		arr_hour = 13; arr_min = 31;
		min_dist = abs(min_time - (11 * 60 + 19));
	}
	
	if (abs(min_time - (12 * 60 + 47)) < min_dist) {
		dep_hour = 12; dep_min = 47;
		arr_hour = 15; arr_min = 0;
		min_dist = abs(min_time - (12 * 60 + 47));
	}
	
	if (abs(min_time - (14 * 60 + 0)) < min_dist) {
		dep_hour = 14; dep_min = 0;
		arr_hour = 16; arr_min = 8;
		min_dist = abs(min_time - (14 * 60 + 0));
	}
	
	if (abs(min_time - (15 * 60 + 45)) < min_dist) {
		dep_hour = 15; dep_min = 45;
		arr_hour = 17; arr_min = 55;
		min_dist = abs(min_time - (15 * 60 + 45));
	}
	
	if (abs(min_time - (19 * 60 + 0)) < min_dist) {
		dep_hour = 19; dep_min = 0;
		arr_hour = 21; arr_min = 20;
		min_dist = abs(min_time - (19 * 60 + 0));
	}
	
	if (abs(min_time - (21 * 60 + 45)) < min_dist) {
		dep_hour = 21; dep_min = 45;
		arr_hour = 23; arr_min = 58;
		min_dist = abs(min_time - (21 * 60 + 45));
	}
	
	
	// Convert flight time into 12h format
	if (dep_hour > 12) {
		dep_hour = dep_hour % 12;
		dep_pm = 1;
	}
	if (arr_hour > 12) {
		arr_hour = arr_hour % 12;
		arr_pm = 1;
	}
	
	
	// Display findings
	printf("Closest departure time is %.2d:%.2d ", dep_hour, dep_min);
	
	if (dep_pm) printf("p.m., ");
	else printf("a.m., ");
	
	printf("arriving at %.2d:%.2d ", arr_hour, arr_min);
	
	if (arr_pm) printf("p.m.\n");
	else printf("a.m.\n");
	
	
	
	return 0;
}
