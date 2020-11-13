#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* numPtr = malloc(sizeof(int));
	char *cPtr;

	*numPtr = 0x12345678;

	printf("1x%x", *(char*)numPtr);		// 리틀 엔디언 : 78 65 43 21 순으로 저장

	free(numPtr);

	return 0;
}
