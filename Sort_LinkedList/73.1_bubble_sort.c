#include <stdio.h>

void bubble_sort(int arr[], int count)
{
    int temp;
    int i = 0;
    while (i++ < count)
    {
        int j = 0;
        while (j < count - i)
        {
            // if (arr[j] < arr[j + 1]) // dsec
            if (arr[j] > arr[j + 1]) // asc
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            j++;
        }
    }
}

int main()
{
    int numArr[10] = {8, 4, 2, 5, 3, 7, 10, 1, 6, 9};
    bubble_sort(numArr, sizeof(numArr) / sizeof(int));

    int i = 0;
    while (i < 10)
    {
        printf("%d ", numArr[i++]);
    }
    printf("\n");

    return (0);
}