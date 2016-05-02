
#include <stdio.h>

int main(void)
{
    int n;  /* entrada  */
    int i;  /* contador */
            /* i = 1, 2, 3, ... , n-1, n */
    int j;  /* contador */
            /* j = 1, 2, 3, ... , n-1, n */

    scanf("%d", &n);

    if (n == 1) 
    {
        printf("+\n");
    }
    else
    {
        n = n - 2;
        // primeira linha
        printf("+");
        i = 1;
        while (i <= n) 
        {
            printf("-");
            i = i + 1;
        }
        printf("+");
        printf("\n");
        // centro
        j = 1;
        while (j <= n) 
        {
            printf("|");
            i = 1;
            while (i <= n) 
            {
                printf(" ");
                i = i + 1;
            }
            printf("|");
            printf("\n");
            j = j + 1;
        }
        // última linha
        printf("+");
        i = 1;
        while (i <= n) 
        {
            printf("-");
            i = i + 1;
        }
        printf("+");
        printf("\n");
    }

    printf("FIM\n");

    return 0;
}
