#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_strcpy(char *dst, char *src)
{
    while (*src)
    {
        *dst = *src;
        dst++;
        src++;
    }
    *dst = 0;
}

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 == *s2)
    {
        if (*s1 == 0)
            return (0);
        s1++;
        s2++;
    }
    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void compareString(char *s1, char *s2)
{
    if (ft_strcmp(s1, s2) == 0)
        printf("same\n");
    else
        printf("diff\n");
}

int main()
{
    char *s1 = malloc(sizeof(char) * 10);

    //strcpy(s1, "Venus");
    ft_strcpy(s1, "Venus");

    compareString(s1, "Venus");

    free(s1);

    return (0);
}