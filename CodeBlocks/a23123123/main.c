#include <stdio.h>
#include <stdlib.h>
#define MAX 20

void doc_matran(int a[][MAX],int dong,int cot)
{
    int i, j;
    for(i=0;i<dong;i++)
        for(j=0;j<cot;j++)
            scanf("%d", &a[i][j]);
}

void in_matran(int a[][MAX] ,int dong, int cot)
{
    int i, j;
    for(i=0;i<dong;i++)
    {
        for(j=0; j<cot;j++)
            printf("%6d", a[i][j]);
        printf("\n");
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("d:\\input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    int m, n;
    int a[MAX][MAX];
    scanf("%d, %d\n", &m, &n);

    doc_matran(a, m, n);
    in_matran(a, m, n);
    return 0;
}
