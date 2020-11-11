// 표준 입력으로 정사각행렬 크기 입력(2 ~ 10) -> 단위행렬

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int row, col;

	scanf("%d", &row);

	col = row;

	int **m = malloc(sizeof(int *) * row);

	for (int i = 0; i < row; i++)
	{
		m[i] = malloc(sizeof(int) * col);
	}

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
		{
			if (i == j)
				m[i][j] = 1;
		}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < row; i++)
		free(m[i]);

	free(m);

	return 0;

}
