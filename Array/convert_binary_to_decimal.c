#include <stdio.h>

int main()
{
	int decimal = 0;
	int binary[4] = {1, 1, 0, 1}; // 1101 순서대로 저장됨

	int position = 0;

	// 역순으로 계산 
	// binary[3] -> binary[2] -> binary[1] -> binary[0]
	for (int i = (sizeof(binary) / sizeof(int)) - 1; i >= 0; i--)
	{
		if (binary[i] == 1)
			decimal += 2 << position; // 시프트 연산

		position++;

		// binary[3] == 1
		// decimal += 1 * 2^0
		// positiom++ -> position == 1

		// binary[2] == 0
		// pass
		// position++ -> position == 2

		// binary[1] == 1
		// decimal (현재: 1) += 2^2 -> 5
		// position++ -> position == 3

		// binary[0] == 1
		// decimal (현재: 5) += 2^3 -> 13
		// position++ -> position == 4

		// decimal == 13
	}	

	printf("%d", decimal);

	return 0;
}
