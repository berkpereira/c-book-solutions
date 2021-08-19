//
//  prj3.c
//  
//
//  Created by Gabriel Pereira on 11/08/2021.
//

// Calculates volume of sphere with user-specified radius

#include <stdio.h>

#define PI 3.141592

int main(void)
{
    float radius;
    
    printf("Enter sphere radius: ");
    scanf("%f",&radius);
    printf("(Approximate) Volume of sphere: %f\n", (4.0f / 3.0f) * PI * radius*radius*radius);
}
