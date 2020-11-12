// 57412 (1110 0000 0100 0100)

#include <stdio.h>

struct Flags {
	union {
		struct {
			unsigned short a : 3;	// 100
			unsigned short b : 4;	// 1000
			unsigned short c : 7;	// 100 0000
			unsigned short d : 2;	// 11
		};
		unsigned short e;	// 2byte = 16bit -> 11/10 0000 0/100 0/100
	};
};

int main()
{
	struct Flags f1 = { 0, };

	f1.a = 4;
	f1.b = 8;
	f1.c = 64;
	f1.d = 3;

	printf("%u\n", f1.e);

	return 0;
}
