// input 10 3
// output 3 1

#include <stdio.h>

int getQuotientAndRemainder(int num1, int num2, int *remainder)
{
    *remainder = num1 % num2;
    return (num1 / num2);
}

int main()
{
    int num1;
    int num2;
    int quotient;
    int remainder;

    scanf("%d %d", &num1, &num2);

    quotient = getQuotientAndRemainder(num1, num2, &remainder);

    printf("%d %d\n", quotient, remainder);

    return (0);
}