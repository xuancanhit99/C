#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void Nhap(int *a)
{
    int i, j;
    for(i=0; i<4; i++)
        for(j=0; j<4; j++)
            {
                printf("Nhap a[%d][%d] = ", i, j);
                scanf("%d", a+i*4+j);
            }
}

void In(int *a)
{
    int i, j;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
            printf("%5d", *(a+4*i+j));

        printf("\n");
    }


}

int main()
{
    int *a;
    a=(int*)calloc(4*4,sizeof(int));
    Nhap(a);
    In(a);
    return 0;
}
