#include <stdio.h>

int main()
{
    int base, exponent, result = 1, i = 1; // initialize result = 1
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    do
    {
        result *= base; // result = result * base;
        i++;
    } while (i <= exponent); // use <= to include last multiplication

    printf("Answer is: %d", result);
    return 0;
}
