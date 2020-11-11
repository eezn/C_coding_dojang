// N-gram

#include <stdio.h>
#include <string.h>

int main()
{
	int num;
	int length;
	char text[11];
	
	printf("ex. 3 Beethoven\n");
	scanf("%d %s", &num, text);

	length = strlen(text);
	
	if (length < num)
	{
		printf("wrong\n");
	}
	else
	{
		for (int i = 0; i < length - num + 1; i++)
		{
			for (int j = 0; j < num; j++)
			{
				printf("%c", text[i + j]);	
			}
			printf("\n");
		}
	}

	return 0;
}
