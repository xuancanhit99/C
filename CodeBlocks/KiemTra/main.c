#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void Nhap(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("Nhap phan tu thu %d = ", i+1);
        scanf("%d", &a[i]);
    }
}

void MaxMin(int a[], int n)
{
    int i;
    int max=a[0], min=a[0];
    int vtmax, vtmin;
    for(i=1; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            vtmax=i+1;
        }

        if(a[i]<min)
        {
            min=a[i];
            vtmin=i+1;
        }

    }
    printf("Trong day co Max = %d nam o vi tri %d\n", max, vtmax);
    printf("Trong day co Min = %d nam o vi tri %d\n", min, vtmin);
}
int main()
{
    int n;
    printf("Nhap so luong phan tu cua day n = ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap day so\n");
    Nhap(a,n);
    MaxMin(a,n);



return 0;
}
