#include <stdio.h>

int main()
{	
	int numArr[3][4] = {
		{ 00, 01, 02, 03 },
		{ 10, 11, 12, 13 },
		{ 20, 21, 22, 23 }
	};
	
	int col = sizeof(numArr[0]) / sizeof(int);
	int row = sizeof(numArr) / sizeof(numArr[0]);

	for (int i = row - 1; i >= 0; i--)
	{
		for(int j = col - 1; j >= 0; j--)
		{
			printf("%02d ", numArr[i][j]);
		}
		printf("\n");
	}

	return 0;

}
