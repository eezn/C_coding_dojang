#include <stdio.h>
#include <string.h>

struct Person
{
    char name[20];
    int age;
    char address[100];
};

struct Person getPerson()
{
    struct Person p;

    strcpy(p.name, "gil dong");
    p.age = 30;
    strcpy(p.address, "young-san, seoul");

    return p;
}

int main()
{
    struct Person p1;

    p1 = getPerson();

    // printf ~

    return 0;
}