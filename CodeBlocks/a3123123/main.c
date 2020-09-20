#include <stdio.h>
#include <stdlib.h>
#define MAX 51

int docmang(int a[])
{
    int i=0;
    do
    {
        scanf("%d", &a[i]);

    }
    while(a[i++]!=0);
    return i-1;

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

void kt_mang(int a[], int b[], int c[], int n)
{
    int i=0;
    int demx=0;
    int demn=0;
    for (i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            demx++;
        }

        if(a[i]==c[i])
        {
            demn++;
        }
    }

    if (demx==n || demn==n)
    {
        if(demx==n)
            printf("Sorted ascending\n");
        if(demn==n)
            printf("Sorted descending\n");
    }
    else
        printf("Unsorted\n");
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("d:\\input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    int t;
    int a[MAX];
    int b[MAX];
    int c[MAX];
    scanf("%d", &t);
    int tcase=0;
    while(t--)
    {
        int i, j=0;
        int k=docmang(a);

        for (i=0; i<k; i++)
            b[i]=a[i];             // b la mang ban dau
        sapxep_noibot(a,k);       // a la mang xuoi

        for (i=k-1;i>=0;i--)      // c la mang nguoc
        {
            c[j]=a[i];
            j++;
        }
        printf("Testcase %d: ", tcase);
        tcase++;
        kt_mang(b,a,c,k);
    }
    return 0;
}
