//
//  prj2.c
//  
//
//  Created by Gabriel Pereira on 15/08/2021.
//

// Program takes in 24h time and converts it into 12h time

#include <stdio.h>

int main(void) {
	
	int hour, minute;
	
	// Take in 24h time
	printf("Enter a 24h time (hh:mm): ");
	scanf("%d : %d", &hour, &minute);
	
	
	if (hour < 0 || minute < 0 || hour > 24 || minute > 59) { // Trying to cover potential problems with input
		printf("Invalid time given\n");
	}
	else if (hour <= 12) {
		printf("Equivalent 12h time: %.2d:%.2d AM\n", hour, minute);
	}
	else if (hour <= 24) {
		printf("Equivalent 12h time: %.2d:%.2d PM\n", hour % 12, minute);
	}
	else { // As a safeguard for other, unforeseen problems with user's input
		printf("Invalid time given\n");
	}
	
	return 0;
}
