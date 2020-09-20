#include <stdio.h>

void NhapDaySo(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("Nhap phan tu thu %d = ", i+1);
        scanf("%d", &a[i]);
    }
}

int DemSoNguyenTo(int a[], int n)
{
    int i, j;
    int dem=0;
    int nguyento=0;
    for(i=0; i<n; i++)
    {
        for(j=2; j<=a[i]-1; j++)
        {
            if(a[i]%j==0)
            {
                nguyento=0;
                break;
            }
            else nguyento=1;

        }
        if(nguyento==1)
        {
            printf("%d ", a[i]);
            dem++;
        }

    }
    return dem;
}

int main()
{
    int n;
    printf("Nhap so luong phan tu cua day: ");
    scanf("%d", &n);
    int a[n];
    NhapDaySo(a,n);
    printf("Trong day so co %d so nguyen to", DemSoNguyenTo(a,n));
    return 0;
}
