#include <stdio.h>
void Nhap(int a[], int n)
{
    int i;
    for(i=0 ;i<n; i++)
    {
        printf("Phan tu %d = ", i+1);
        scanf("%d", &a[i]);
    }
}

void duong(int a[], int n)
{
    int i, h=0;
    int b[n];
    for(i=0; i<n; i++)
    {
        if (a[i]>0)
        {
            b[h]=a[i];
            h++;
        }

    }
    printf("Cac phan tu duong la: ");
    for(i=0; i<h; i++)
        printf("%d ", b[i]);
    printf("\n");
}


void am(int a[], int n)
{
    int i, h=0;
    int c[n];
    for(i=0; i<n; i++)
    {
        if (a[i]<0)
        {
            c[h]=a[i];
            h++;
        }

    }
    printf("Cac phan tu am la: ");
    for(i=0; i<h; i++)
        printf("%d ", c[i]);
}

int main()
{

    int a[1000];
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
	Nhap(a,n);
	duong(a,n);
	am(a,n);

}
