/*
    INTEIRO i
    PARA i <- 1 ATÉ 10 FAÇA
        ESCREVA i
*/
#include <stdio.h>
int main(void)
{
    int i;                  
    printf("Início!\n"); 
    for ( i = 1 ; i <= 10  ; i++ )
    {
        if (i % 2 == 1)
            continue;
        printf("%d\n", i);
    }
    printf("Fim!\n"); 
    return 0;
}









