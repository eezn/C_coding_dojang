#include <stdio.h>
#include <string.h>

int main()
{
	char s1[31], s2[31];

	scanf("%s %s", s1, s2);

	int ret = strcmp(s1, s2);

	printf("%d", ret);
	
	return 0;
}
