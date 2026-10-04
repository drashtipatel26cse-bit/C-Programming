#include <stdio.h>

int main()
{
    int number;
    int factorial = 1;

    printf("Enter a number:");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial = %d\n", factorial);

    return 0;
}
