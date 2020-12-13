#include <stdio.h>

union Box
{
    short candy;
    float snack;
    char doll[8];
};

enum BOX_TYPE
{
    BOX_PAPER = 0,
    BOX_WOOD,
    BOX_PLASTIC
};

void printBox(union Box box)
{
    printf("%d\n", box.candy);
}

void printBoxType(enum BOX_TYPE boxType)
{
    printf("%d\n", boxType);
}

int main()
{
    union Box box;
    enum BOX_TYPE boxType;

    box.candy = 10;
    boxType = BOX_PLASTIC;

    printBox(box);
    printBoxType(boxType);

    return (0);
}