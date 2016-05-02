
#include <stdio.h>

int main() {
	int a;		// inteiro: a
	int b;
	int soma;

	printf("Informe o valor de A: ");
	scanf("%i", &a);	// leia(a)

	printf("Informe o valor de B: ");
	scanf("%i", &b);

	soma = a + b;

	printf("%i + %i = %i\n", a, b, soma);
				// escreva(soma)

	return 0;
}
