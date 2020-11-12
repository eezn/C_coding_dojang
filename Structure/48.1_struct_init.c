#include <stdio.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

int main()
{
	struct Person p1 = { .name = "홍길동", .age = 30, .address = "서울시 용산구 한남동"};
	printf("%s %d %s\n", p1.name, p1.age, p1.address);

	struct Person p2 = { "고길동", 40, "서울시 서초구 반포동" };
	printf("%s %d %s\n", p2.name, p2.age, p2.address);

	return 0;
}
