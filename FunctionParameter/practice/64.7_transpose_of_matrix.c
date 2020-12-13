// input
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

// output
// 1 5 9 13
// 2 6 10 14
// 3 7 11 15
// 4 8 12 16

#include <stdio.h>

//void transpose(int arr[][4], int size)
void transpose(int (*arr)[4], int size)
{
    int tmp;

    int i = 0;
    while (i < size)
    {
        int j = 0;
        while (j < i)
        {
            tmp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = tmp;
            j++;
        }
        i++;
    }
}

int main()
{
    int matrix[4][4];

    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
          &matrix[0][0], &matrix[0][1], &matrix[0][2], &matrix[0][3],
          &matrix[1][0], &matrix[1][1], &matrix[1][2], &matrix[1][3],
          &matrix[2][0], &matrix[2][1], &matrix[2][2], &matrix[2][3],
          &matrix[3][0], &matrix[3][1], &matrix[3][2], &matrix[3][3]);

    int n = sizeof(matrix[0]) / sizeof(int);

    transpose(matrix, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return (0);
}