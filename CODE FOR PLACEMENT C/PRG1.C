/**
 * C program to find maximum between two numbers
 */

#include <stdio.h>

int main()
{
    int num1, num2;

    /* Input two numbers from user */
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    /* Compare num1 with num2 */
    if(num1 > num2)
    {
        /* True part means num1 > num2 */
        printf("%d is maximum", num1);        
    }
    else
    {
        /* False part means num1 < num2 */
        printf("%d is maximum", num2);
    }

    return 0;
}