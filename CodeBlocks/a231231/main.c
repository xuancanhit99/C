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
    return i;

}

void in_mang(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%5d", a[i]);
    printf("\n");
}

void inmangnguoc(int a[], int n)
{
    int i;
    for (i=n-1;i>=0;i--)
            printf("%5d", a[i]);
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
    int t;
    scanf("%d", &t);
    int a[MAX];
    int tcase=0;
    while(t--)
    {
        int k=docmang(a);
        printf("Testcase %02d: n = %d\n", tcase, k);
        tcase++;
        printf("Orig:");
        in_mang(a,k);
        sapxep_noibot(a,k);
        printf("Sort:");
        inmangnguoc(a,k);
        if(t)
            printf("\n");



    }


    return 0;
}
