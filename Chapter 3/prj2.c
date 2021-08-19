//
//  prj2.c
//  
//
//  Created by Gabriel Pereira on 14/08/2021.
//

// Program that formats product information entered by the user - item number, unit price and purhcase date

#include <stdio.h>

int main(void)
{
	int item_no, month, day, year;
	float unit_price;
	
	// Get item number
	printf("Enter item number: ");
	scanf("%d", &item_no);
	
	// Get unit price
	printf("Enter unit price: ");
	scanf("%f", &unit_price);
	
	// Get purchase date
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d / %d / %d", &month, &day, &year);
	
	// Print out formatted information provided
	printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%7.2f\t%.2d/%.2d/%.2d\n", item_no, unit_price, month, day, year); // Bit of a mess to read, but formatting done properly in a single call of printf
	
	return 0;
}
