#include <stdio.h>
#include <stdlib.h>

void Nhap(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &a[i]);
    }
}

void SapXep(int A[], int n)
{
    int i, j;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
                if(A[j] > A[j+1])
                {
                    int temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;
                }
    }
}



void NoiHaiDay(int a[], int b[], int n)
{
    int i;
    int c[2*n];
    for(i=0; i<2*n; i++)
    {
        if(i<n)
            c[i]=a[i];
        else
            c[i]=b[i-n];
    }
    SapXep(c,2*n);
    for(i=0; i<2*n; i++)
    {
        if(c[i]!=c[i+1])
        {
            if(i<2*n-1)
                printf("%d, ",c[i]);
            else
                printf("%d", c[i]);
        }

    }
    printf("\n");
    printf("Nhap so can tim trong day: ");
    int k;
    int dem=0;
    scanf("%d", &k);
    for(i=0; i<2*n; i++)
    {
        if(c[i]==k)
            dem++;
    }
    if(dem==0)
        printf("So %d khong co trong day", k);
    else
        printf("So %d co trong day ", k);



}



int main()
{
    int n;
    printf("Nhap so luong phan tu cua day: ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Nhap day so thu nhat\n");
    Nhap(a,n);
    printf("Nhap day so thu 2\n");
    Nhap(b,n);
    printf("Day moi theo thu tu tang dan la: ");
    NoiHaiDay(a,b,n);


    return 0;
}
