// 표준 입력으로 행렬의 크기 m, n과 문자(char) 행렬이 입력됩니다. (m과 n의 범위는 3 ~ 10)
// 입력된 m, n은 공백으로 구분되며 행렬 안에서 *은 지뢰이고 .은 지뢰가 아닙니다.
// 지뢰가 아닌 요소에는 인접한 지뢰의 개수를 출력하는 프로그램을 만드세요.
// (scanf 함수 호출 전에 문자열을 출력하면 안됩니다)
// 여러 줄을 입력받으려면 다음과 같이 for 반복문으로 scanf를 반복 호출하면 됩니다.
//
// for (int i = 0; i < m; i++)
// {
//	scanf("%s", matrix[i]);
// }

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
		memset(matrix[i], 0, sizeof(char) * (col + 1));
	}

	for (int i = 0; i < row; i++)
	{
		scanf("%s", matrix[i]);
	}

	printf("\n");
	for (int i = 0; i < row; i++)
	{
		printf("%s\n", matrix[i]);
	}

	printf("\n");
	for (int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			if(matrix[i][j] == '*')
			{
				printf("%c", matrix[i][j]);
				continue;
			}
			else
			{
				for (int y = i - 1; y <= i + 1; y++)
				{
					for (int x = j - 1; x <= j + 1; x++)
					{
						if (y < 0 || x < 0 || y >= row || x >= col) continue;
						else if (matrix[y][x] == '*') mine_counter += 1;
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
