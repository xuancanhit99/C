#include <stdio.h>
int main()
{
    int i, k=0, h=0;
    int a[10], b[10], c[10];

    int dem=1;
    for(i=0; i<10; i++)
    {
        printf("Nhap phan tu %d = ", dem);
        scanf("%d", &a[i]);
        dem++;
    }

    for(i=0; i<10; i++)
    {
        if(a[i]>0)
        {
            b[k] = a[i];
            k++;
        }
        if(a[i]<0)
        {
            c[h] = a[i];
            h++;
        }
    }
    printf("Cac phan tu duong cua mang b la: ");
    for(i=0; i<k; i++)
        printf("%d ", b[i]);
    printf("\n");
    printf("Cac phan tu am cua mang c la: ");
    for(i=0; i<h; i++)
        printf("%d ", c[i]);

    return 0;
}
