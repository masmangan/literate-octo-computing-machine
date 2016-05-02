#include <stdio.h>

int main()
{
    long x = 20;
    long y = 30;
    long z = 40;

    long *p;    // declaração do ponteiro

    printf("%ld\n", x);
    printf("%p\n", &x);

    p = &x;     // atribuindo o endereço de x ao ponteiro
    printf("%ld\n", *p);
    printf("%p\n", p);

    printf("%ld\n", y);
    printf("%p\n", &y);

    p++;     // atribuindo o endereço de x ao ponteiro
    printf("%ld\n", *p);
    printf("%p\n", p);

    printf("%ld\n", z);
    printf("%p\n", &z);


    return 0;
}
