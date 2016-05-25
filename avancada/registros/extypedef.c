#include <stdio.h>

typedef long inteiro;

typedef struct defcli { int a; int b; } CLIENTE;

CLIENTE c1, c2;
CLIENTE c3;

int main() {

	CLIENTE c4;

	inteiro a;

	a = 42;

	printf("A=%ld\n", a);

	return 0;
}
