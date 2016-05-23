
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define E 5.0f

float fahr2cel(float f)
{
	float c;
	c = 5.0 / 9.0 * ( f - 32.0 );

	if (fabsf(c) <= E)
		printf("Ponto de congelamento da água\n");
	else if (fabsf(c - 100.0f) <= E)
		printf("Ponto de ebulição da água\n");
	else if (fabsf(c + 273.0f) <= E)
		printf("Zero absoluto\n");

	return c;
}

int main()
{
	float tf, tc;

//	tf = 451;
	scanf("%f", &tf);

	tc = fahr2cel(tf);

	// 451 Degree Fahrenheit = 232.777778 Celsius
	printf("%fF = %fC\n", tf, tc);

	return EXIT_SUCCESS;
}
