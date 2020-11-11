#include <stdio.h>

int main()
{
	int numArr[3][4] = {
		{ 00, 01, 02, 03 },
		{ 10, 11, 12, 13 },
		{ 20, 21, 22, 23 }
	};

	printf("%d\n", sizeof(numArr));

	// Code Snippet
	int col = sizeof(numArr[0]) / sizeof(int);
	int row = sizeof(numArr) / sizeof(numArr[0]);

	printf("%d\n", col);
	printf("%d\n", row);

	return 0;
}
