#include <stdio.h>

int main()
{
    long long number;
    int count = 0;

    printf("Enter a number: ");
    scanf("%lld", &number);

  do
  {
    number = number / 10;
    count++;
  } while (number != 0);
   
    printf("Number of digits: %d\n", count);

    return 0;
}
