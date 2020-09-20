#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void Nhap(int *a, int *n)
{
    scanf("%d", n);
    int i;
    for(i=0; i<*n; i++)
    {
        scanf("%d", a+i);
    }
}

void Xuat(int *a, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d ", *(a+i));
    }
    printf("\n");
}

void Tron(int *a, int *b,int m, int n)
{
    int i, j;
    i=0;

        printf("%d ", *(a+i));
    i++;
    j=0;
        printf("%d ", *(b+j));
    j++
    }
}

int main()
{
    int a[MAX];
    int b[MAX];
    int m, n;
    Nhap(a,&m);
    Nhap(b,&n);
    Tron(a,b,m,n);
    return 0;
}
