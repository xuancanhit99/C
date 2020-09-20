#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    unsigned int x, n, a ,b;
    scanf("%u%u", &x, &n);
    a=x>>4;
    b=x<<4;
    printf("x = %u = 0x%08x\n", x, x);
    printf("x >> %u = %u = 0x%08x\n", n, a, a);
    printf("x << %u = %u = 0x%08x\n", n, b, b);

    return 0;
}
