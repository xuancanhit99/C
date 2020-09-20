#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 10000

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("d:\\input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    int t;
    int a[MAX_LEN];
    scanf("%d", &t);
    int kt=0;
    while(t--)
    {
        int i=0;
        int dem=0;
        do
        {
            scanf("%d", &a[i]);
            i++;
            dem++;
            if (a[i]==0)

            printf("%d ", a[i-1]);
        }

        printf("\n");
    }

    return 0;
}
