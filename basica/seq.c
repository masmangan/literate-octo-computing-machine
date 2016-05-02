
#include <stdio.h>

int main(void)
{
    int n;  /* entrada  */
    int i;  /* contador */
            /* i = 1, 2, 3, ... , n-1, n */
    i = 1;
    scanf("%d", &n);

    while (i <= n) 
    {
        printf("%d\n", i);
        i = i + 1;
    }

    printf("FIM\n");

    return 0;
}
