
#include <stdio.h>

int main() {

	FILE *arquivo;
	int n;

	arquivo = fopen("dados.txt", "r");

	while ( ! feof(arquivo) ) {

		int r = fscanf(arquivo, "%i", &n);

		printf("Resultado do scanf=%i; o número lido foi %i.\n", r, n);

	}

	fclose(arquivo);


	return 0;
}
