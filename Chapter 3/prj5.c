//
//  prj5.c
//  
//
//  Created by Gabriel Pereira on 14/08/2021.
//

// Program takes in integers from 1 to 16 in user-specified order, prints them in a square format and gives out their sums

#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16; // Number in each variable name stands for order in which number was input by user
	int row1, row2, row3, row4, col1, col2, col3, col4, diag1, diag2; // Sums of rows, columns and diagonals of the square
	
	printf("Enter the integers from 1 to 16 in any order: ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&num1, &num2, &num3, &num4, &num5 ,&num6 , &num7 , &num8 , &num9 , &num10 , &num11 , &num12 , &num13 , &num14 , &num15 , &num16); // Example input: 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1 : gives a magic square!
	
	row1 = num1 + num2 + num3 + num4;
	row2 = num5 + num6 + num7 + num8;
	row3 = num9 + num10 + num11 + num12;
	row4 = num13 + num14 + num15 + num16;
	
	col1 = num1 + num5 + num9 + num13;
	col2 = num2 + num6 + num10 + num14;
	col3 = num3 + num7 + num11 + num15;
	col4 = num4 + num8 + num12 + num16;
	
	diag1 = num1 + num6 + num11 + num16;
	diag2 = num4 + num7 + num10 + num13;
	
	printf("%2d %2d %2d %2d\n",num1, num2, num3, num4);
	printf("%2d %2d %2d %2d\n",num5 ,num6 , num7 , num8);
	printf("%2d %2d %2d %2d\n",num9 , num10 , num11 , num12);
	printf("%2d %2d %2d %2d\n",num13 , num14 , num15 , num16);
	
	printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);
	printf("Column sums: %d %d %d %d\n", col1, col2, col3, col4);
	printf("Diagonal sums: %d %d\n", diag1, diag2);
	
	// Could implement if statement to say whether it's a magic square or not, but loops still to come in the book!
	
	return 0;
}
