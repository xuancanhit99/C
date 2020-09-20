#include "conio.h"
#include "stdio.h"
#define MAX_LEN 50


void NhapMang(int A[][MAX_LEN], unsigned int n, unsigned int m)
{
    int i, j;
    for( i = 0; i<n; i++)
        for( j = 0; j<m; j++)
        {
            scanf("%d",&A[i][j]);
        }
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("d:\\input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int B[MAX_LEN][MAX_LEN];
    unsigned int n,m;
    scanf("%d%d",&n,&m);
    NhapMang(B,n,m);

    int temp, i, j;
    for( i = 0; i<m; i++)
    {
        for(j = 0; j<i; j++)
        {
            temp=B[i][j];
            B[i][j]=B[j][i];
            B[j][i]=temp;
        }
    }
    for( i = 0; i<m; i++)
    {
        for( j = 0; j<n; j++)
            printf("%4d ",B[i][j]);
        printf("\n");
    }


    return 0;
}
