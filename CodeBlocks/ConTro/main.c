#include<stdio.h>
#include<stdlib.h>

void NhapMaTran(int *a,int dong,int cot)    //Hàm Nhập Ma Trận sd Con Trỏ//
{
    int i, j;
    for(i=0;i<dong;i++)
    {
        for(j=0;j<cot;j++)
        {
            printf("Nhap a[%d][%d] = ", i, j);
            scanf("%d",a + cot*i + j);
        }
    }
}
void InMaTran(int *a,int dong,int cot)      //Hàm In Ma Trận sd Con Trỏ//
{
    int i, j;
    for(i=0;i<dong;i++)
    {
        for(j=0;j<cot;j++)
        {
            printf("%5d  ",*(a + cot*i + j));
        }
        printf("\n");
    }
}
void NhanMaTran(int *a, int *b, int m, int n, int p, int *c)
{
    int i, j, k;
    for(i=0;i<m;i++)
        for(j=0;j<p;j++)
        {
            *(c+p*i+j)=0;
            for(k=0; k<=n-1; k++)
                *(c+p*i+j) += *(a+n*i+k) * *(b+p*k+j);
        }
}
int main()
{
    int *a, *b, *c, m, n, p;
    a=(int*)calloc(10*10,sizeof(int));
    b=(int*)calloc(10*10,sizeof(int));
    c=(int*)calloc(10*10,sizeof(int));
    printf("Nhap kich thuoc ma tran A\n");      //Nhập Ma Trận A//
    printf("m = "); scanf("%d", &m);
    printf("n = "); scanf("%d", &n);
    printf("Nhap ma tran A\n");
    NhapMaTran(a,m,n);
    printf("Nhap kich thuoc ma tran B\n");      //Nhập Ma Trận B//
    printf("n = "); scanf("%d", &n);
    printf("p = "); scanf("%d", &p);
    printf("Nhap ma tran B\n");
    NhapMaTran(b,n,p);
    NhanMaTran(a,b,m,n,p,c);    //Tính Ma Trận C là tích của 2 ma trận A và B//
    printf("Ma Tran A:\n");                     //In Ma Trận A//
    InMaTran(a,m,n); printf("\n");
    printf("Ma Tran B:\n");                     //In Ma Trận B//
    InMaTran(b,n,p); printf("\n");
    printf("Ma Tran C:\n");                     //In Ma Trận C//
    InMaTran(c,m,p);
    return 0;
}
