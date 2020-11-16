#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person
{
    char name[20];
    int age;
    char address[100];
};

struct Person *allocPerson()
{
    struct Person *p = malloc(sizeof(struct Person));

    strcpy(p->name, "gil dong");
    p->age = 30;
    strcpy(p->address, "yong-san, seoul");

    return p;
}

int main()
{
    struct Person *p1;

    p1 = allocPerson();

    // printf ~

    free(p1);

    return 0;
}