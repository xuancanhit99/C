#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 10000

void in_mang(int a[], int n)
{
    int i;
    for (i=0; i<n; i++)
        printf("%d ", a[i]);
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("d:\\input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    int t, n;
    int a[MAX_LEN];
    int i=0;
    scanf("%d", &t);
    while(t--)

        do
        {


            scanf("%d", &a[i]);
            i+=1;


        }
        while(a[i]=0);

        in_mang(a,n);


    return 0;
}
