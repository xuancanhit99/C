#include <stdio.h>
#include <stdlib.h>


void NT(int n)
{
    int nguyen_to=1;
    for(i=0; i<n-1; i++)
    {
        if(n%i==0)
        {
            nguyen_to=0;
            break;
        }
    }
}

int main()
{
    int n,k,i;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int b[n];
    k=KTNT(a,b,n);
    return 0;
}
