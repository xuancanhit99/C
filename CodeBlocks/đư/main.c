#include <stdio.h>
#include <stdlib.h>
#define MAX 50;

void docmang(int a[], int n)
{
    int i;
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);
}

void inmang(int a[], int n)
{
    int i;
    for (i=0; i<n; i++)
            printf("%5d", a[i]);
    printf("\n");
}

void in_i(int n)
{
    for (i=0;i<n;i++)
        printf("%5d", i);
    printf("\n");
}

void sapxep_noibot(int A[], int n)
{

    int i, j;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n-1; j++)
                if(A[j] > A[j+1])
                {
                    int temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;



                }


    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("d:\\input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    int n;
    scanf("%d", &n);
    int a[n];
    docmang(a,n);
    in_i(n);
    inmang(a,n);
    sapxep_noibot(a,n);
    inmang(a,n);
    return 0;
}
