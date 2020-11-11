// 표준 입력으로 공백이 포함된 길이 30이하의 영문 문자열 입력
// (공백이 여러 개 연속될 수 있음)
// 입력된 문자열이 회문이면 1 아니면 0 을 출력하는 프로그램

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	char text[31];
	int length;
	bool isPalindrome = true;

	printf("문자열을 입력하세요: ");
	scanf("%[^\n]s", text);
	length = strlen(text);

	int begin = 0;
	int end = length - 1;

	while (begin < end)
	{
		while (text[begin] == ' ')
			begin++;

		while (text[end] == ' ')
			end--;

		if (begin > end || text[begin] != text[end])
		{
			isPalindrome = false;
			break;
		}
		begin++;
		end--;
	}

	printf("%d\n", isPalindrome);

	return 0;
}
