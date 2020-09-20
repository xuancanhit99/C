#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a;
    do
        scanf("%u", &a);
    while (a!=0);
        printf("0x%x", a);
    return 0;
}
