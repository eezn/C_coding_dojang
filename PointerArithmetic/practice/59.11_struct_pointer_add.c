#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Point3D {
	float x;
	float y;
	float z;
};

int main()
{
	void *ptr = malloc(sizeof(struct Point3D) * 3);
	struct Point3D p[3];
	float result1, result2;

	// input: 1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0
	scanf("%f %f %f %f %f %f %f %f %f", 
			&p[0].x, &p[0].y, &p[0].z, 
			&p[1].x, &p[1].y, &p[1].z, 
			&p[2].x, &p[2].y, &p[2].z
		 );

	memcpy(ptr, p, sizeof(struct Point3D) * 3);
	memset(p, 0, sizeof(struct Point3D) * 3);

	result1 = ((struct Point3D*)ptr + 1)->x;
	result2 = ((struct Point3D*)ptr + 2)->z;

	// output: 4.0 9.0
	printf("%.1f %.1f\n", result1, result2);

	free(ptr);

	return 0;
}
