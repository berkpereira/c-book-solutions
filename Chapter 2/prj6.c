//
//  prj6.c
//  
//
//  Created by Gabriel Pereira on 11/08/2021.
//

#include <stdio.h>

// Evaluate the polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
// Use Horner's rule: ((((3x + 2)x - 1)x + 7)x - 6

int main(void)
{
    float x;
    
    printf("This script will evaluate the value of the polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 for a user-specified value of x.\nProvide a value for x: ");
    scanf("%f",&x);
    printf("Value of polynomial (for x = %.2f) is %.2f\n", x, ((((3*x + 2)*x - 1)*x + 7)*x - 6));
    
    return 0;
}
