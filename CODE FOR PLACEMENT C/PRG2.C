/**
 * C program to find maximum between three numbers using ladder if else if
 */

#include <stdio.h>

int main()
{
    int num1, num2, num3, max;

    /* Input three numbers from user */
    printf("Enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);


    if((num1 > num2) && (num1 > num3))
    {
        /* If num1 > num2 and num1 > num3 */
        max = num1;
    }
    else if(num2 > num3)
    {
        /* If num1 is not > num2 and num2 > num3 */
        max = num2;
    }
    else
    {
        /* If num1 is not > num2 and num2 is also not > num3 */
        max = num3;
    }

    /* Print maximum number */
    printf("Maximum among all three numbers = %d", max);

    return 0;
}