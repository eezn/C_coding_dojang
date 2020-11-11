#include <stdio.h>

int main()
{
	int row, col;
	printf("row col input >>> ");
	scanf("%d %d", &row, &col);

	int matrix[row][col];
	
	int row_count = sizeof(matrix) / sizeof(matrix[0]);
	int col_count = sizeof(matrix[0]) / sizeof(int);

	int value = 1;
	for (int j = 0; j < row_count; j++)
		for (int k = 0; k < col_count; k++)
			matrix[j][k] = value++;

	for (int i = 0; i < row_count; i++)
	{
		for (int j = 0; j < col_count; j++)
			printf("%02d ", matrix[i][j]);
		printf("\n");
	}

	printf("\n");
	for (int i = 0; i < row_count; i++)
		for (int j = 0; j < col_count; j++)
		{
			if (i == j)
				printf("%02d ", matrix[i][j]);
		}

	printf("\n");
	for (int m = 0; m < row_count; m++)
		printf("%02d ", matrix[m][m]);

	return 0;
}
