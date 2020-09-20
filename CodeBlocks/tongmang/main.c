#include <stdio.h>
#include <stdlib.h>

double nhonhat(double a[], int x)
{
    int i;
    double min=a[0];

    for (i=1; i<x; i++)
        if (min > a[i])
            min= a[i];
    return min;
}

double lonnhat(double a[], int x)
{
    int i;
    double max=a[0];

    for (i=1; i<x; i++)
        if (max < a[i])
            max= a[i];
    return max;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("d:\\input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    unsigned int x;
    scanf("%u", &x);
    double a[x];
    int i;
    for (i=0; i<x; i++)
        scanf("%lf",&a[i]);
    printf("Min = %.3lf\n", nhonhat(a,x));
    printf("Max = %.3lf\n", lonnhat(a,x));
    return 0;
}
