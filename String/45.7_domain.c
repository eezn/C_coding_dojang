#include <stdio.h>
#include <string.h>

int main()
{
	// input : www.google.co.kr
	
	char input[60];
	char* storage[10];
	scanf("%s", input);

	char* tok = strtok(input, ".");

	int i = 0;
	while (tok != NULL)
	{
		storage[i] = tok;
		i++;

		tok = strtok(NULL, ".");
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%s\n", storage[i]);
	}

	return 0;
}
