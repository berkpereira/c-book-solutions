//
//  prj1.c
//  
//
//  Created by Gabriel Pereira on 14/08/2021.
//

// Program accepts date from user in format mm/dd/yyyy and displays it in the form yyyymmdd

#include <stdio.h>

int main(void)
{
	int day, month, year;
	
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d / %d / %d", &month, &day, &year);
	
	printf("You entered the date %.2d%.2d%.2d\n", year, month, day);
	
	
	return 0;
}
