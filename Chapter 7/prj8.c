//
//  prj8.c
//  
//
//  Created by Gabriel Pereira on 17/08/2021.
//

// Program takes in 12h clock time and converts into 24h time

#include <stdio.h>
#include <ctype.h>

int main(void) {
	
	int hour, minute;
	char am_pm;
	
	
	// Present program to user
	printf("\nProgram takes in 12h time and converts it into 24h time\n");
	
	
	// Take in user input
	input:
	printf("Enter 12h time ( hh:mm am/pm ): ");
	scanf("%d : %d %c", &hour, &minute, &am_pm);
	
	
	// Check for am/pm indication
	if ( toupper(am_pm) == 'P' ) { // pm indicated
		hour += 12;
	}
	else if ( toupper(am_pm) != 'A' ){ // not pm nor am indicated (nothing is included for the am case; that's because nothing needs be done if time is am)
		printf("Invalid am/pm value given!\n");
		goto input;
	}
	
	
	// Present result
	printf("24h time: %.2d:%.2d\n", hour, minute);
	
	return 0;
}
