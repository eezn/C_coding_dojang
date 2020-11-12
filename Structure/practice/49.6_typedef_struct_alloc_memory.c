#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _Point3D {
	float x;
	float y;
	float z;
} Point3D;

int main()
{
	Point3D *p1 = malloc(sizeof(Point3D));

	p1->x = 10.0;
	p1->y = 20.0;
	p1->z = 30.0;

	printf("%f %f %f\n", p1->x, p1->y, p1->z);

	free(p1);

	return 0;
}
