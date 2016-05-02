/* marco.mangan@pucrs.br */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
    int dia;
    char diaext[51];    // ALGO: literal diaext
    fprintf(stdout, "Informe o dia da semana (1-7): ");
    fscanf(stdin, "%i", &dia);
    switch (dia) {
        case 1: strcpy(diaext, "domingo");    break;
        case 2: strcpy(diaext, "segunda-feira");  break;
        case 3: strcpy(diaext, "terça-feira");    break;
        case 4: strcpy(diaext, "quarta-feira");   break;
        case 5: strcpy(diaext, "quinta-feira");   break;
        case 6: strcpy(diaext, "sexta-feira");    break;
        case 7: strcpy(diaext, "sábado");         break;
        default: 
            fprintf(stderr, "** ERRO: entrada inválida **\n");
            return EXIT_FAILURE;
    }
    fprintf(stdout, "O dia %d corresponde ao dia: %s.\n", dia, diaext);
    return EXIT_SUCCESS;
}








