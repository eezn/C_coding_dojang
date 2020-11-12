#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
	char name[20];
	int grade;
	int class;
	float average;
};

int main()
{

	struct Student *s1 = malloc(sizeof(struct Student));

	strcpy(s1->name, "go gil dong");
	s1->grade = 1;
	s1->class = 3;
	s1->average = 65.389999;

	printf("name: %s\n", s1->name);
	printf("grade: %d\n", s1->grade);
	printf("class: %d\n", s1->class);
	printf("average: %f\n", s1->average);

	free(s1);

	return 0;
	
}
