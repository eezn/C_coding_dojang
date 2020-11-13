#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* numPtr = malloc(sizeof(int));
	char *cPtr;

	*numPtr = 0x12345678;

	cPtr = (char* )numPtr;

	printf("1x%x", *cPtr);		// 리틀 엔디언 : 78 65 43 21 순으로 저장

	free(numPtr);

	return 0;
}
