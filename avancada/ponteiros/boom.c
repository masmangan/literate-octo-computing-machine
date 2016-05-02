#include <stdio.h>

int main()
{
    long *p = 0;

    printf("%p\n", p); 
    printf("%ld\n", *p); // esta área não pertence ao programa!

    return 0;
}
