
#include <stdio.h>
#include <string.h>

struct scliente {
	char nome[41];	// até 40 caracteres
	int anoNascimento;	// quatro digitos
	char endereco[101];	// até 100 caracteres
	int conta;			// número da conta no vetor de contas
	char cgc[15];			// número no Cadastro Geral de Contribuintes (CGC)
						//           1
					    //  12345678901234
						// "000.123.123-00"
} clientes[2000];

struct sconta {
	int cliente;		// número do cliente no vetor de contas
	int anoAbertura;	// quatro digitos
	float saldo;		// em reais
} contas[2000];

int main()
{
	strcpy(clientes[0].nome, "Michel Miguel Elias Temer Lulia");
	clientes[0].anoNascimento = 1940;
	strcpy(clientes[0].endereco, "Palacio do Planalto, Brasilia, DF, Brasil");
	clientes[0].conta = 0;
	strcpy(clientes[0].cgc, "123.123.123-12");

	strcpy(clientes[1].nome, "Dilma Vana Rousseff");
	clientes[1].anoNascimento = 1947;
	strcpy(clientes[1].endereco, "indeterminado, Brasilia, DF, Brasil");
	clientes[1].conta = 1;
	strcpy(clientes[1].cgc, "321.321.321-32");	

	strcpy(clientes[2].nome, "José Renan Vasconcelos Calheiros");
	clientes[2].anoNascimento = 1955;
	strcpy(clientes[2].endereco, "Senado Federal, Brasilia, DF, Brasil");
	clientes[2].conta = 2;
	strcpy(clientes[2].cgc, "666.666.666-66");	

	contas[0].cliente = 0;
	contas[0].anoAbertura = 2016;
	contas[0].saldo = 100.00;

	contas[1].cliente = 1;
	contas[1].anoAbertura = 2016;
	contas[1].saldo = 200.00;

	contas[2].cliente = 2;
	contas[2].anoAbertura = 2016;
	contas[2].saldo = 300.00;

	// saque
	int c;
	int op;
	float val;

	printf("Informe sua conta conta:");
	scanf("%d", &c);

	printf("Informe a operação:");
	scanf("%d", &op);

	printf("Informe o valor (R$):");
	scanf("%f", &val);

	printf("C=%d OP=%d VAL=%.2f\n", c, op, val);

	if (op == 1) { // 001
		contas[c].saldo -= val;

		printf("Cliente=%s C=%d Saldo=%.2f\n", clientes[contas[c].cliente].nome, c, contas[c].saldo);

	} else {
		if (op == 2) {
			// TODO:
		}
	}
	

	return 0;
}
