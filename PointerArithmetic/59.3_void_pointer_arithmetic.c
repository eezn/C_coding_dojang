// gcc 에서 ++ -- 증감 연산자 컴파일 오류 
// (visual studio : 마이크로소프트 전용 언어 확장)

#include <stdio.h>
#include <stdlib.h>

int main()
{
	void* ptr = malloc(100);

	printf("%p\n", ptr);
	printf("%p\n", (int*)ptr + 1);	// +4
	printf("%p\n", (int*)ptr - 1);	// -4

	void* ptr2 = ptr;
	printf("%p\n", ++(int*)ptr2);	// 증감연산자는 변수 값이 바뀐다.
	printf("%p\n", --(int*)ptr2);

	printf("%p\n", ((int*)ptr++));
	printf("%p\n", ((int*)ptr--));

	free(ptr);

	return 0;
}
