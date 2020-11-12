#include <stdio.h>
#include <string.h>

typedef struct _Person {	// typedef
	char name[20];
	int age;
	char address[100];
} Person;					// typedef -> 구조체 별칭(alias)을 Person으로 정의

int main()
{
	Person p1;

	strcpy(p1.name, "");
	p1.age = 30;
	strcpy(p1.address, "");

	printrf("%s %d %s\n", p1.name, p1.age, p1.address);

	return 0;
}
