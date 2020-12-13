// input 고 길동
// output 고길동

#include <stdio.h>

void printFullName(char *family, char *given)
{
    printf("%s%s", family, given);
}

int main()
{
    char familyName[31];
    char givenName[31];

    scanf("%s %s", familyName, givenName);

    printFullName(familyName, givenName);

    return (0);
}