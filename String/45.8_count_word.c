#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char* paragraph = malloc(sizeof(char) * 1000);
	int count = 0;

	scanf("%[^\n]s", paragraph);
	char* tok = strtok(paragraph, "., ");
	
	while (tok != NULL)
	{
		if (strcmp(tok, "the") == 0)
			count++;

		tok = strtok(NULL, "., ");
	}

	printf("%d", count);

	free(paragraph);

	return 0;
}
