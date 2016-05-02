
#include <stdio.h>

int main() {

	FILE *arquivo;
	int c;

	arquivo = fopen("lerbyte", "r");

	int i;
	for( i = 0 ; i < 10 ; i++) {
		c = getc(arquivo);
		printf("%i %c %x\n", c, c, c);
	}

	fclose(arquivo);


	return 0;
}
