#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

void doc_matran(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
}
void giai_bt(int a[], int b[], int n, int x)

{
    int i, y;
    for(i=0; i<n; i++)
        for(y=0;y<n;y++)
            if ((i-y<0) || (i+y>n) || ((i-y<0) && (i+y>n)))
            {
                if(i-y<0)
                    if(i+y<=n && a[i]==b[i+y] && -x <=y && y<=x)
                        printf("%d ", i);
                if(i+y>n)
                    if(i-y>=0 && a[i]==b[i-y] && -x <=y && y<=x)
                        printf("%d ", i);

            }
            else
            if (a[i]==b[i+y] || a[i]==b[i-y] )
                if(-x<=y && y<=x)
                    printf("%d ", i);
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("d:\\input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    int x, n;
    int A[MAX];
    int B[MAX];
    scanf("%d %d", &n, &x);
    doc_matran(A,n);
    doc_matran(B,n);
    giai_bt(A,B,n,x);
    return 0;
}
