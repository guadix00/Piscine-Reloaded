#include <stdio.h>
#include "ft_abs.h"

int main()
{
    int a = -5;
    int b = 3;
    int c = 0;

    printf("El valor absoluto de %d es %d\n", a, ABS(a));
    printf("El valor absoluto de %d es %d\n", b, ABS(b));
    printf("El valor absoluto de %d es %d\n", c, ABS(c));

    return 0;
}
