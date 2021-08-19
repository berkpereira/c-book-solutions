//
//  prj8.c
//  
//
//  Created by Gabriel Pereira on 12/08/2021.
//

// Program calculates remaining balance on a loan after first, second and third monthly payments (all user-specified)

#include <stdio.h>

int main(void)
{
	float current_balance, interest_rate, monthly_payment;
	
	
	// Take in user inputs
	printf("Enter amount of loan ($): ");
	scanf("%f",&current_balance);
	printf("Enter annual interest rate (%%): ");
	scanf("%f",&interest_rate);
	printf("Enter monthly payment ($): ");
	scanf("%f",&monthly_payment);
	
	interest_rate = (interest_rate * 0.01f) / 12.0f; // Convert into decimal and monthly rate
	
	// First balance update
	current_balance = current_balance * (1 + interest_rate) - monthly_payment;
	printf("\nBalance remaining after first payment: $%.2f\n", current_balance);
	
	// Second balance update
	current_balance = current_balance * (1 + interest_rate) - monthly_payment;
	printf("Balance remaining after second payment: $%.2f\n", current_balance);
	
	// Third balance update
	current_balance = current_balance * (1 + interest_rate) - monthly_payment;
	printf("Balance remaining after third payment: $%.2f\n", current_balance);
	
	return 0;
}
