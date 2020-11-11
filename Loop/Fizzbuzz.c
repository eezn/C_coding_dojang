/* FizzBuzz
 * 1에서 100까지 출력
 * 3의 배수는 Fizz 출력
 * 5의 배수는 Buzz 출력
 * 3과 5의 공배수는 FizzBuzz 출력
 */

#include <stdio.h>

int main()
{
	int i = 1;
	while(i <= 100)
	{
		printf("%03d -> ", i); 
		if(i % 3 == 0)
			printf("Fizz");
		if(i % 5 == 0)
			printf("Buzz");
		printf("\n");
		
		i++;
	}
	return 0;
}
