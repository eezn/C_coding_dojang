#include <stdio.h>
#include <stdlib.h>

int main()
{
	void* ptr = malloc(100);

	printf("%p\n", ptr);
	printf("%p\n", (int*)ptr + 1);	// +4
	printf("%p\n", (int*)ptr - 1);	// -4

	void* ptr2 = ptr;
	printf("%p\n", ++(int*)ptr2);
	printf("%p\n", --(int*)ptr2);

	printf("%p\n", ((int*)ptr++));
	printf("%p\n", ((int*)ptr--));

	free(ptr);

	return 0;
}
