#include <stdio.h>
#include <stdlib.h>
#define MAX 20;

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
        printf("%4d", a[i]);
    printf("\n");
}

void sapxep_noibot(int A[], int n)
{
    int dem=1;
    int i, j;
    for (i=0; i<n; i++)
    {
        for (j=n-1; j>i; j--)
                if(A[j-1] > A[j])
                {
                    int temp = A[j-1];
                    A[j-1] = A[j];
                    A[j] = temp;
                    printf("%4d: ", dem);
                    inmang(A,n);
                    dem++;
                }


    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("d:\\input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    int n;
    scanf("%2d", &n);
    int a[n];
    docmang(a,n);
    printf("   0: ");
    inmang(a,n);
    sapxep_noibot(a,n);
    return 0;
}











