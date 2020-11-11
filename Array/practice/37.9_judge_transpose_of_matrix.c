#include <stdio.h>

int main()
{

	// create matrix by input
	int row, col;
	printf("input >>> ");
	scanf("%d", &row);
	col = row;

	int matrix[row][col];

	int row_count = sizeof(matrix) / sizeof(matrix[0]);
	int col_count = sizeof(matrix[0]) / sizeof(int);

	int value = 1;
	for (int j = 0; j < row_count; j++)
		for (int k = 0; k < col_count; k++)
			matrix[j][k] = value++;

	printf("\n");
	for (int i = 0; i < row_count; i++)
	{
		for (int j = 0; j < col_count; j++)
			printf("%02d ", matrix[i][j]);
		printf("\n");
	}


	// transpose
	int tmp;
	for (int i = 0; i < row_count; i++)
	{
		for (int j = 0; j < col_count; j++)
		{
			if ( i < j )
			{
				tmp = matrix[j][i];
				matrix[j][i] = matrix[i][j];
				matrix[i][j] = tmp;
			}
		}
	}

	printf("\n");
	for (int i = 0; i < sizeof(matrix) / sizeof(matrix[0]); i++)
	{
		for (int j = 0; j < sizeof(matrix[0]) / sizeof(int); j++)
			printf("%02d ", matrix[i][j]);
		printf("\n");
	}
	
	return 0;

}

// sizeof ~ 찾아 바꾸기 적용 row, col 로 따로 빼서 중복 없게
