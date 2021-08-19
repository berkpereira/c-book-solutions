//
//  prj7.c
//  
//
//  Created by Gabriel Pereira on 11/08/2021.
//

// Program takes in integer amount of money and breaks it down into a minimum amount of 20, 10, 5 and 1$ bills

#include <stdio.h>

int main(void)
{
    int current_money, bills_20, bills_10, bills_5, bills_1;
    
    printf("Provide amount of money to be broken down: ");
    scanf("%d",&current_money);
    
    bills_20 = current_money / 20;
    current_money = current_money - (bills_20 * 20);
    
    bills_10 = current_money / 10;
    current_money = current_money - (bills_10 * 10);
    
    bills_5 = current_money / 5;
    current_money = current_money - (bills_5 * 5);
    
    bills_1 = current_money / 1;
    current_money = current_money - (bills_1 * 1);
	
	printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", bills_20, bills_10, bills_5, bills_1);
	
    return 0;
}
