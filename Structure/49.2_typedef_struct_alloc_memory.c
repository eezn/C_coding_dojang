#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _Person {		// anonymous struct 이면 _Person 생략
	char name[20];
	int age;
	char address[100];
} Person;

int main()
{
	Person *p1 = malloc(sizeof(Person));

	strcpy(p1->name, "홍길동");
	p1->age = 30;
	strcpy(p1->address, "서울시 용산구 한남동");

	printf("%s\n%d\n%s\n", p1->name, p1->age, p1->address);

	free(p1);

	return 0;
}
