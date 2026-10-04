#include <stdio.h>

int main()
{
    int number, original, temp, remainder;
    int digits = 0, sum = 0;
    int power, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;
    temp = number;

    // Count digits
    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }

    // Calculate Armstrong sum
    temp = number;

    while (temp != 0)
    {
        remainder = temp % 10;

        power = 1;

        for (i = 1; i <= digits; i++)
        {
            power = power * remainder;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
