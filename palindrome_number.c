#include <stdio.h>

int main()
{
    int number, original, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while (number != 0)
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }

    if (original == reverse)
        printf("%d is a Palindrome number.\n", original);
    else
        printf("%d is not a Palindrome number.\n", original);

        return 0;
}
