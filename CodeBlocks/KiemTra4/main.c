#include <stdio.h>
#include <stdlib.h>
#define MAX 100

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
    if(nguyen_to==1)
}

void KTNT(int a[], int n)
{
    int i, j;
    int k=0;
    for(i=0; i<n; i++)
    {
        int nguyen_to=1;
        for(j=0; j<a[i]-1; j++)
        {
            if(a[i]%j==0)
            {
                nguyen_to=0;
                break;
            }
        }
        if(nguyen_to==1)
        {
            printf("%d", a[i]);
            k++;
        }
    }
}


int main()
{
    FILE *f;
    int i=0, n;
    f=fopen("D:\\DAY_SO.txt","rt");
    fscanf(f,"%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        fscanf(f,"%d", &a[i]);
    }
    fclose(f);
    KTNT(a,n);

    f=fopen("D:\\DAY_SO.txt","at");




    return 0;
}
