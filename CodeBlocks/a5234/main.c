#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 50

void in_mang(int A[][MAX_LEN], int n, int m)
{
    int i, j;
    for(i = 0; i<m; i++)
    {
        for(j = 0; j<n; j++)
            printf("%4d",A[i][j]);
        printf("\n");
    }

}

void NhapMang(int A[][MAX_LEN],int n, int m)
{
    int i, j;
    for(i = 0; i<m; i++)
        for(j = 0; j<n; j++)
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
    int n,m;
    scanf("%d, %d\n",&m,&n);
    NhapMang(B,n,m);
    in_mang(B,n,m);



    return 0;
}
