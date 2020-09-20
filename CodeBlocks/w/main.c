#include <stdio.h>
#include <stdlib.h>


int main()
{
    int  n, k;
    double i, sum;
    scanf("%d", &n);
    sum=0;
    for(i=1;i<=n;i++)
    {;
        k=i;
        if ((int)(k%2)!=0)
        sum+=1/i;
        else
        sum-=1/i;
    }
    printf("%.13lf", sum);
    return 0;
}
