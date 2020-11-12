#include <stdio.h>
#include <stdlib.h>
// #include <string.h>

struct Person {
	char name[20];
	int age;
};

int main()
{
	struct Person* p[5];
	int size = sizeof(p) / sizeof(struct Person* );
	int oldest = 0;

	for (int i = 0; i < size; i++)
	{
		p[i] = malloc(sizeof(struct Person));
		// memset(p[i], 0, sizeof(struct Person));
	}

	scanf("%s %d %s %d %s %d %s %d %s %d", 
			p[0]->name, &p[0]->age, 
			p[1]->name, &p[1]->age, 
			p[2]->name, &p[2]->age, 
			p[3]->name, &p[3]->age, 
			p[4]->name, &p[4]->age);

	for (int i = 0; i < size; i++)
	{
		if (p[oldest]->age < p[i]->age)
			oldest = i;
	}

	printf("%s %d", p[oldest]->name, p[oldest]->age);
	
	for (int i = 0; i < size; i++)
	{
		free(p[i]);
	}

	return 0;
}
