#include <stdio.h>
#include <stdarg.h>

void printNunmbers(int args, ...)
{
    va_list ap;

    va_start(ap, args);
    for (int i = 0; i < args; i++)
    {
        int num = va_arg(ap, int);

        printf("%d ", num);
    }
    va_end(ap);

    printf("\n");
}

int main()
{
    printNunmbers(1, 10);
    printNunmbers(2, 10, 20);
    printNunmbers(3, 10, 20, 30);
    printNunmbers(4, 10, 20, 30, 40);

    return (0);
}