
#include <stdio.h>
#include <stdlib.h>

void troca(float*, float*);
void troca(float* a, float* b)
{
	float tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;	
}

int main(int argc, char* argv[])
{
	float x, y;
	
	x = 54.0f;
	y = 43.0f;

	printf("X=%f Y=%f\n", x, y);
	troca(&x, &y);
	printf("X=%f Y=%f\n", x, y);

	return EXIT_SUCCESS;
}

