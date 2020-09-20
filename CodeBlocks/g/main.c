#include <stdio.h>
#include <stdlib.h>
#define MAX 50

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

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("d:\\input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    int a[MAX];

    int k=docmang(a);
    printf("%d\n", k);
    int i;
    for (i=0;i<k;i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
