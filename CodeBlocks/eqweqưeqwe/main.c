#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 201


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("d:\\input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    char st[MAX];
    gets(st);
    n=strlen(st);
    for (i=0;i<n;i++)
        printf("%d ", st[i]);
    printf("Hello, %s!\n", st);
    printf("Welcome to our Academy!");

    return 0;
}
