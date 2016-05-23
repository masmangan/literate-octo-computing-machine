
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	FILE* dados;
	int a, b, s;
	s = 0;
	char nome[101];

	if (argc == 1) {
		// lendo dados do terminal
		printf("Informe o nome do arquivo: ");
		fgets(nome, 100, stdin);
		// removendo ENTER do final do texto lido
		nome[strlen(nome)-1] = '\0';
	} else {
		// lendo dados da linha de comando
		strcpy(nome, argv[1]);
	}
	printf("Abrindo arquivo: [%s]\n", nome);

	dados = fopen(nome, "r");

	if (dados == NULL) {
		fprintf(stderr, "Arquivo não encontrado.\n");
		return EXIT_FAILURE;
	}

	while (fscanf(dados, "%d %d", &a, &b) == 2) {
		if (a > b) {
			printf("%d\n", a);
			s = s + b;
		} else {
			printf("%d\n", b);
			s = s + a;
		}
	}
	printf("S=%d\n", s);
	fclose(dados);

	return EXIT_SUCCESS;
}
