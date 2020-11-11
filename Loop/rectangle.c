#include <stdio.h>

int button;

void rectangle_1()
{
	printf("\n");
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			printf("*");
			if(i==j)
				break;
		}
		printf("\n");
	}
}

void rectangle_2()
{
	printf("\n");
	for(int i = 10; i > 0; i--)
	{
		for(int j = 0; j < 10; j++)
		{
			if (i==j)
				break;
			printf("*");			
		}
		printf("\n");
	}
}

void rectangle_3()
{
	printf("\n");
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			if(j<=i)
				printf("*");
		}
		printf("\n");
	}

	for(int i = 10; i > 0; i--)
	{
		for(int j = 0; j < 10; j++)
		{
			if(j<i)
				printf("*");
		}
		printf("\n");
	}
}

void diagonal()
{
	printf("\n");
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			if(j==i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}

void mountain()
{
	int mountain;
	// 높이: mountain, 가로: (mountain * 2) - 1	
	printf("원하는 산의 높이를 입력하세요: ");
	scanf("%d", &mountain);

	printf("\n");
	for(int i = mountain; i > 0; i--)
	{
		for(int j = 1; j <= mountain; j++)
		{
			if(j<i)
				printf(" ");
			else
				printf("*");
		}

		for(int k = 0; k < mountain; k++)
		{
			if(i<=k)
				printf("*");
		}
		printf("\n");
		
	}	
}

void interface()
{
	printf("\n====================================\n");
	printf("1. 증가하는 삼각형\n");
	printf("2. 감소하는 삼각형\n");
	printf("3. 증가했다가 감소하는 삼각형\n");
	printf("4. 증가하는 대각선\n");
	printf("5. 산 모양\n");
	printf("(그만두려면 CTRL + C 또는 0)");
	printf("\n====================================\n");
	printf("삼각형 모양을 선택하세요: ");
	scanf("%d", &button);

}

int main()
{
	while(1)
	{
		interface();
		switch(button)
		{
			case 1:
				rectangle_1();
				break;
			case 2:
				rectangle_2();
				break;
			case 3:
				rectangle_3();
				break;
			case 4:
				diagonal();
				break;
			case 5:
				mountain();
				break;
			case 0:
				goto EXIT;
			default:
				printf("\n");
				printf("선택된 숫자: %d", button);
		}
	}
EXIT:
	printf("프로그램을 종료합니다.");
	return 0;
}
