// gcc 에서 ++ -- 증감 연산자 컴파일 오류 
// (visual studio : 마이크로소프트 전용 언어 확장)

#include <stdio.h>

int main()
{
	int numArr[5] = { 11, 22, 33, 44, 55 };
	void* ptr =&numArr[2];

	printf("%d\n", *(int*)ptr);

	printf("%d\n", *((int*)ptr + 1));	// 44
	printf("%d\n", *((int*)ptr - 1));	// 22

	printf("%d\n", *(++(int*)ptr));		// 44
	printf("%d\n", *(--(int*)ptr));		// 33

	printf("%d\n", *(((int*)ptr))++);	// 33
	printf("%d\n", *(((int*)ptr))--);	// 44

	return 0;
}
