//
//  prj9.c
//  
//
//  Created by Gabriel Pereira on 16/08/2021.
//

// Program calculates remaining balance on a loan after however many monthly payments (all user-specified)

#include <stdio.h>

int main(void) {
	
	float current_balance, interest_rate, monthly_payment;
	int num_of_payments;
	
	
	// Present program to user
	printf("\nThis program shows you the balance on a loan after however many monthly payments you want, with user-specified loan, interest rate and monthly payment.\n");
	
	
	// Take in user inputs
	printf("Enter amount of loan ($): ");
	scanf("%f",&current_balance);
	printf("Enter annual interest rate (%%): ");
	scanf("%f",&interest_rate);
	printf("Enter monthly payment ($): ");
	scanf("%f",&monthly_payment);
	printf("How many monthly updates do you want to see? ");
	scanf("%d", &num_of_payments);
	printf("\n");
	
	
	// Convert into decimal and monthly rate
	interest_rate = (interest_rate * 0.01f) / 12.0f;
	
	// Balance updates
	for (int i = 1; i <= num_of_payments; i++) {
		current_balance = current_balance * (1 + interest_rate) - monthly_payment;
		printf("Balance remaining after payment %d: $%.2f\n", i, current_balance);
	}
	
	return 0;
}
