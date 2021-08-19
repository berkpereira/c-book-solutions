//
//  prj8.c
//  
//
//  Created by Gabriel Pereira on 16/08/2021.
//

// Program takes in 2 parameter inputs and prints out a calendar

#include <stdio.h>

int main(void) {
	
	int num_days, week_day;
	
	
	// Present program to user
	printf("\nThis program will display a calendar for you\n");
	
	
	// Take in user input
	printf("Enter number of days in month: ");
	scanf("%d", &num_days);
	printf("Enter starting day of the week(1=Mon, 7=Sun): ");
	scanf("%d", &week_day);
	
	
	// Print calendar header
	printf("Mon Tue Wed Thu Fri Sat Sun\n");
	
	
	// Aligning the starting day at the right point
	for (int i = 1; i < week_day; i++) {
		printf("    "); // 4 spaces per day gives appropriate formatting
	}
	
	
	// Loop to print out each day
	for (int d = 1; d <= num_days; d++, week_day++) {
		printf("%3d ", d);
		
		// if statement checks whether it's last day of the week and prints newline if so
		if (week_day % 7 == 0)
			printf("\n");
	}
	
	
	printf("\n");
	
	return 0;
}
