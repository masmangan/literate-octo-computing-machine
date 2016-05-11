#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    int s[SIZE];
    int j;
    int total = 0;

    for( j = 0 ; j < SIZE ; j++ ) {
        s[j] = 2 + 2 * j;
    }

    for( j = 0 ; j < SIZE ; j++ ) {
        total += s[j];
    }

    printf("%8s%13s\n", "Elemento", "Valor");

    for( j = 0 ; j < SIZE ; j++ ) {
        printf("%8d%13d\n", j, s[j]);
    }

    printf("%8s%13d\n", "Total", total);

    return EXIT_SUCCESS;
}

