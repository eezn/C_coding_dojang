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

union Box getBox()
{
    union Box b;

    b.candy = 10;

    return b;
}

enum BOX_TYPE getBoxType()
{
    return BOX_WOOD;
}

int main()
{
    union Box box;
    enum BOX_TYPE boxType;

    box = getBox();
    boxType = getBoxType();

    printf("%d\n", box.candy);
    printf("%d\n", boxType);

    return 0;
}
