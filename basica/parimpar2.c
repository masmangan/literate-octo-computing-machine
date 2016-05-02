
/*
* marco.mangan@pucrs.br
*/
#include <stdio.h>

int main(void)
{
	int n;
    int r;

	r = scanf("%d", &n);
    printf("N= %d\n", n);
    printf("R= %d\n", r);
    if (r != 1) {
        printf("Entrada inválida!\n");
        return 1;
    }

	if (n % 2 == 0)
	    printf("É par!\n");
	else
		printf("É ímpar!\n");

	return 0;
}
