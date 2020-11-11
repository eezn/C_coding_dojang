#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int row, col;
	int mine_counter = 0;

	scanf("%d %d", &row, &col);

	char **matrix = malloc(sizeof(char *) * row);

	for (int i = 0; i < row; i++)
	{
		matrix[i] = malloc(sizeof(char) * (col + 1));
		memset(matrix[i], 0, sizeof(char) * (col + 1)); // 배열을 0으로 초기화
	}

	for (int i = 0; i < row; i++)
	{
		scanf("%s", matrix[i]);
	}

	printf("\n");
	for (int i = 0; i < row; i++)
	{
		printf("%s", matrix[i]); // 문자열로 출력

		/* 배열 하나하나 출력
		for (int j = 0; j < col + 1; j++)
		{
			printf("%c", matrix[i][j]);
		}
		printf("\n");
		*/
	}

	printf("\n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (matrix[i][j] == '*')
			{
				printf("%c", matrix[i][j]);
				continue;
			}
			else
			{
				for (int k = i - 1; k <= i + 1; k++)
				{
					for (int l = j - 1; l <= j + 1; l++)
					{
						if (k < 0 || l < 0 || k >= row || l >= col) continue;
						else if (matrix[k][l] == '*') mine_counter += 1;
					}
				}	
				matrix[i][j] = mine_counter;
				printf("%d", matrix[i][j]);
				mine_counter = 0;
			}

		}
		printf("\n");
	}

	for (int i = 0; i < row; i++)
		free(matrix[i]);

	free(matrix);

	return 0;

}
