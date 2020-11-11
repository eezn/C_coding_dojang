#include <stdio.h>
#include <string.h>

int main()
{
	char s1[30] = "The Little Prince";

	char *ptr = strtok(s1, " "); // strtok 는 공백문자를 ' '가 아닌 " "를 사용

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");
	}

	return 0;
}
