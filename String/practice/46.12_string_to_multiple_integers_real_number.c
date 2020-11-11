#include <stdio.h>
#include <stdlib.h>

int main()
{
	char s1[31];
	int num1, num2;
	float num3;
	char* end;

	scanf("%[^\n]", s1); // 0x158f3330 2435 1.123456

	num1 = strtol(s1, &end, 16);
	num2 = strtol(end, &end, 10);
	num3 = atof(end);

	printf("0x%x\n", num1);
	printf("%d\n", num2);
	printf("%f\n", num3);

	return 0;
}
