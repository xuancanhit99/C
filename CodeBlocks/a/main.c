#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int n;
    int i;
    double sum,S;
    scanf("%u",&n);
    sum=1;
    S=0;
        for(i=1;i<=n;i++)
        {
            sum*=i;
        	S+=1/sum;
        }
    printf("%.10f", S);
    return 0;
}
