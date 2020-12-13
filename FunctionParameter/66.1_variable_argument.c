#include <stdio.h>

void printNunmbers(int args, ...)
{
    printf("%d ", args);
}

int main()
{
    printNunmbers(1, 10);
    printNunmbers(2, 10, 20);
    printNunmbers(3, 10, 20, 30);
    printNunmbers(4, 10, 20, 30, 40);

    return (0);
}