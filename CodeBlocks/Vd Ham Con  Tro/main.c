#include <stdio.h>
#include <stdlib.h>

int *max(int *a, int *b)
{
    if(*a>*b)
        return a;
    else
        return b;
}

int main()
{
    int a, b, *c;
    scanf("%d", &a);
    scanf("%d", &b);
    c=max(&a,&b);
    printf("c = %d", *c);
    return 0;
}
