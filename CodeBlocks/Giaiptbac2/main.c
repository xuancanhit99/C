#include<stdio.h>
#define MAX 100

void Nhap(int *a, int *n)
{
    int i;
    scanf("%d", n);
    for(i=0; i<*n; i++)
    {
        printf("Nhap phan tu thu %d = ", i+1);
        scanf("%d", (a+i));
    }
}

void Xuat(int *a, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("a[%d]=%d\n",i, *(a+i));
    }
}


int main()
{

    int a[MAX], n;

    Nhap(a,&n);
    Xuat(a,n);
    return 0;
}
