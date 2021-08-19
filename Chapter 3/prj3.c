//
//  prj3.c
//  
//
//  Created by Gabriel Pereira on 14/08/2021.
//

// Program takes in a book's ISBN (13 digit, post 2007) and breaks it down into its meaningful components

#include <stdio.h>

int main(void)
{
	
	int gsi_prefix, group_identifier, publisher_code, item_no, check_digit;
	
	printf("Enter ISBN: ");
	scanf("%d - %d - %d - %d - %d", &gsi_prefix, &group_identifier, &publisher_code, &item_no, &check_digit);
	printf("GSI prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", gsi_prefix, group_identifier, publisher_code, item_no, check_digit); // Pretty self-explanatory
	
	/*
	 Could have made code more readable by using 5 different calls to printf instead, like this:
	 printf("GS1 prefix: %d\n", gsi_prefix);
	 printf("Group identifier: %d\n", group_identifier);
	 printf("Publisher code: %d\n", publisher_code);
	 printf("Item number: %d\n", item_no);
	 printf("Check digit: %d\n", check_digit);
	*/
	
	return 0;
}
