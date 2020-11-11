#include <stdio.h>

int main()
{
	int numArr[3][4] = {
		{ 00, 01, 02, 03 },
		{ 10, 11, 12, 13 },
		{ 20, 21, 22, 23 }
	};

	int (*numPtr)[4] = numArr;

	printf("%p\n", *numPtr);

	printf("%p\n", *numArr);

	printf("%d\n", numPtr[2][1]);

	printf("%d\n", sizeof(numArr));

	printf("%d\n", sizeof(numPtr));

	return 0;

}
