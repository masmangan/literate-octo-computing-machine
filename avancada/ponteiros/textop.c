#include <stdio.h>

int main()
{
    char s[50] = "Oi, s\nou um teste do uso de ponteiros!";
    char *pc;

    pc = s;
    while (*pc) 
        printf("[%p]|%c|\n", pc, *pc++);
    
    printf("\n");

    //int i;
    //for( i = 0 ; s[i] != 0 ; i++)
    //    printf("%c", s[i]);


    //printf("\n"); 
 
    return 0;
}
