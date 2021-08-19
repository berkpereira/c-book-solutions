//
//  prj3.c
//  
//
//  Created by Gabriel Pereira on 15/08/2021.
//

// Program takes in a potential share transaction through 2 fictional brokers and calculates the commission taken by each competitor
// Then outputs a breakdown of the transactions and the brokers' commissions

#include <stdio.h>

int main(void) {
	
	int no_shares;
	float share_price, transaction, commission1, commission2;
	
	// Get user input for share price and no of shares
	printf("Enter number of shares to be traded: ");
	scanf("%d", &no_shares);
	
	printf ("Enter individual share price ($): ");
	scanf("%f", &share_price);
	
	transaction = no_shares * share_price;
	
	
	// Calculating commission of 1st broker
	if (transaction < 2500.00f) {
		commission1  = 30.00f + .017 * transaction;
	}
	else if (transaction < 6250.00f) {
		commission1 = 56.00f + .0066f * transaction;
	}
	else if (transaction < 20000.00f) {
		commission1 = 76.00f + .0034f * transaction;
	}
	else if (transaction < 50000.00f) {
		commission1 = 100.00f + .0022f * transaction;
	}
	else if (transaction <= 500000.00f) {
		commission1 = 155.00f + .0011f * transaction;
	}
	else if (transaction > 500000.00f) {
		commission1 = 255.00f + .0009f * transaction;
	}
	else {
		printf("Invalid inputs given\n");
		return 0;
	}
	
	
	// Calculating commission of 2nd broker
	if (no_shares < 2000) {
		commission2 = .03f * no_shares + 33;
	}
	else if (no_shares >= 2000) {
		commission2 = .02f * no_shares + 33;
	}
	else {
		printf("Invalid inputs given\n");
		return 0;
	}
	
	
	// Presenting results
	printf("\n\nTransaction Breakdown:\n\n");
	
	printf("No. of Shares\tShare Price\tTransaction Value\n");
	printf("%d\t\t$%.2f\t\t$%.2f\n\n\n", no_shares, share_price, transaction);
	
	printf("Broker Commission Breakdown:\n\n");
	
	printf("Broker 1\tBroker 2\n");
	printf("$%.2f\t\t$%.2f\n\n", commission1, commission2);
	
	
	// Verdict between broker options
	if (commission1 == commission2) {
		printf("Brokers are equivalent\n\n");
	}
	else if (commission1 < commission2) {
		printf("Broker 1 is cheaper than Broker 2 by %.0f%%\n\n", (commission2 - commission1) / commission2 * 100.0f);
	} else {
		printf("Broker 2 is cheaper than Broker 1 by %.0f%%\n\n", (commission1 - commission2) / commission1 * 100.0f);
	}
	
	return 0;
}
