#include <stdio.h>
#include <stdlib.h>

void by_pointer()
{
	printf("[by_pointer]\n");

	char *string1 = malloc(sizeof(char) * 31);
	char *string2 = malloc(sizeof(char) * 31);
	char *string3 = malloc(sizeof(char) * 31);
	char *string4 = malloc(sizeof(char) * 31);

	scanf("%s %s %s %s", string1, string2, string3, string4);

	printf("%s\n", string1);
	printf("%s\n", string2);
	printf("%s\n", string3);
	printf("%s\n", string4);

	free(string1);
	free(string2);
	free(string3);
	free(string4);
	
	return;
}

void by_array()
{
	printf("[by_array]\n");

	char string1[31];
	char string2[31];
	char string3[31];
	char string4[31];

	scanf("%s %s %s %s", string1, string2, string3, string4);

	printf("%s\n", string1);
	printf("%s\n", string2);
	printf("%s\n", string3);
	printf("%s\n", string4);

	return;
}


int main()
{
	int choice;
	printf("1. by_pointer\n2. by_array\n\n");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
			by_pointer();
			break;
		case 2:
			by_array();
			break;
		default:
			printf("잘못된 입력");
			break;
	}

	return 0;
}
