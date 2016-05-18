

#include <stdio.h>

int main(int argc, char* argv[])
{
	printf("Teste de parâmetros.\n");

	printf("Nosso programa recebeu %i argumentos.\n", argc);
	int i;
	for( i = 0 ; i < argc ; i ++) {
		printf("Parâmetro %i tem valor %s.\n", i, argv[i]);
	}
	return 0;
}
