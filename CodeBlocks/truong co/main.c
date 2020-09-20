#include <stdio.h>
#include <stdlib.h>

 int doi_cho(int a, int b)
{
    int temp;
    temp=a;;
    a=b;
    b=temp;
    return a;
    return b;
    printf("%d%d", a, b);
}



int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    doi_cho(a,b);
    printf("%d%d", x, y);
    return 0;
}
