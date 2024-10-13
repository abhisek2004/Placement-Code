/**
 * C program to check whether a triangle is Equilateral, Isosceles or Scalene
 */

#include <stdio.h>

int main()
{
    int side1, side2, side3;

    /* Input sides of a triangle */
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &side1, &side2, &side3);

    if(side1==side2 && side2==side3) 
    {
        /* If all sides are equal */
        printf("Equilateral triangle.");
    }
    else if(side1==side2 || side1==side3 || side2==side3) 
    {
        /* If any two sides are equal */
        printf("Isosceles triangle.");
    }
    else 
    {
        /* If none sides are equal */
        printf("Scalene triangle.");
    }

    return 0;
}