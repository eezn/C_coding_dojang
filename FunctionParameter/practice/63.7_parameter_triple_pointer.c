#include <stdio.h>
#include <stdlib.h>

void allocMatrix(void ***ptr, int row, int col, int elementSize)
{
    int i;

    *ptr = malloc(sizeof(void *) * row);
    i = 0;
    while (i < row)
        (*ptr)[i++] = malloc(elementSize * col);
}

void freeMatrix(void ***ptr, int row)
{
    int i;

    i = 0;
    while (i < row)
        free((*ptr)[i++]);
    free(*ptr);
}

int main()
{
    short **matrix;

    allocMatrix((void ***)&matrix, 3, 3, sizeof(short));

    matrix[0][2] = 10;
    matrix[1][1] = 20;
    printf("%d %d\n", matrix[0][2], matrix[1][1]);

    freeMatrix(&matrix, 3);

    return (0);
}