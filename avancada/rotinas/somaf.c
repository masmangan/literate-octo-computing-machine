
/*
marco.mangan@pucrs.br
*/
#include <stdio.h>

#include "s.h"

// extern float somar(float, float);

//float somar(float x, float y)
//{
//   return x + y;
//}

int main()
{
    float a, b, s;

    printf("A: ");
    scanf("%f", &a);
    printf("B: ");
    scanf("%f", &b);

    s = somar(a, b);

    printf("S=%.2f\n", s);

    return 0;
}
