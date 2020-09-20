#include <stdio.h>
int main()
{
    int i, n, j;
    printf("Nhap n: ");
    scanf("%d", &n);                //Nhập số lượng các phần tử của 2 dãy//
    int a[n], b[n];
    int dem=1;
    printf("Nhap day 1:\n")
    for(i=0; i<n; i++)
    {
        printf("a[%d] = ", dem);
        scanf("%d", &a[i]);         //Nhập các phần tử dãy 1//
        dem++;
    }
    dem=1;
    for(i=0; i<n; i++)
    {
        printf("a[%d] = ", dem);
        scanf("%d", &b[i]);         //Nhập các phần tử dãy 2//
        dem++;
    }

    int c[2*n];
    int k=0;
    i=0;
    for(j=0; j<n; j++)
    {
        if(a[i]<b[j] && b[j]<a[i+1])
        {
            c[k]=a[i];
            c[k+1]=b[j];
            k++;
            i++;
        }
    }




    return 0;
}
