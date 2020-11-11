// 자료형 **포인터이름 = malloc(sizeof(자료형 *) * 세로크기); -> 세로 공간 메모리 할당
// 반복문으로 반복하면서 포인터[i] = malloc(sizeof(자료형) * 가로크기); -> 가로 공간 메모리 할당
// 반복문으로 반복하면서 free(포인터[i]); -> 가로 공간 메모리 해제
// free(포인터); -> 세로 공간 메모리 해제

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int **m = malloc(sizeof(int *) * 3); // 세로: 3
	for (int i = 0; i < 3; i++)
	{
		m[i] = malloc(sizeof(int) * 4); // 가로: 4
	}

	m[0][0] = 1;
	m[2][0] = 5;
	m[2][3] = 2;

	printf("%d\n", m[0][0]);
	printf("%d\n", m[2][0]);
	printf("%d\n", m[2][3]);

	for (int i = 0; i < 3; i++)
	{
		free(m);
	}

	free(m);

	return 0;
}
