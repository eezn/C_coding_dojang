#include <stdio.h>

int main()
{
	int numArr[5] = { 11, 22, 33, 44, 55 };
	int* numPtrA;
	int* numPtrB;
	int* numPtrC;

	numPtrA = &numArr[2];

	numPtrB = numPtrA;
	numPtrC = numPtrA;

	numPtrB++;
	numPtrC--;

	for (int i = sizeof(numArr) / sizeof(int) - 1; i >= 0 ; i--)
		printf("numArr[%d] : %d\n", i, numArr[i]);
	
	printf("\n");

	printf("numPtrA: %p\n", numPtrA);
	printf("numPtrB: %p\n", numPtrB);
	printf("numPtrC: %p\n", numPtrC);
	printf("\n");

	printf("*numPtrA: %d\n", *numPtrA);
	printf("*numPtrB: %d\n", *numPtrB);
	printf("*numPtrC: %d\n", *numPtrC);
	printf("\n");

	printf("*(numPtrB + 1): %d\n", *(numPtrB + 1));
	printf("*(numPtrC + 1): %d\n", *(numPtrC - 1));
	printf("\n");

	printf("*(numPtrB--): %d\n", *(--numPtrB));
	printf("*(numPtrC++): %d\n", *(++numPtrC));
	printf("\n");

	return 0;
}
