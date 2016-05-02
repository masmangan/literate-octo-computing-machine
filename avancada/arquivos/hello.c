
#include <stdio.h>

int main() {

	FILE *arquivo;

	arquivo = fopen("saida.txt", "w");

	fprintf(arquivo, "Oi, mundo!\n");

	fclose(arquivo);


	return 0;
}
