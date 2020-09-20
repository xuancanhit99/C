#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    b=(a<<31)>>31;

    printf("%d", abs(b+1));

    return 0;
}
