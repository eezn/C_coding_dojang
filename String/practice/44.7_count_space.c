// 표준 입력으로 길이 1,000 이하의 문자열이 입력됩니다.
// 입력된 문자열에서 공백의 개수를 출력하는 프로그램을 만드세요
// scanf에서 공백을 포함한 문자열을 입력받으려면 서식 지정자 "%[^\n]s"를 사용

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int count = 0;
	char *paragraph = malloc(sizeof(char) * 1000);
	
	scanf("%[^\n]s", paragraph);

	char *ptr = strchr(paragraph, ' ');

	while(ptr != NULL)
	{
		count++;
		ptr = strchr(ptr + 1, ' ');
	}
	
	printf("%d", count);

	free(paragraph);

	return 0;
}
