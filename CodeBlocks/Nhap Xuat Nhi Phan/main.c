#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char TEN_HANG[50];
    int DON_GIA;
    int SO_LUONG;
    int THANH_TIEN;
    int TONG_TIEN;
}SoLieu;


int GhiFile()
{
    FILE *f;
    int i,n;
    int tongtien=0;
    SoLieu sl;
    f=fopen("SO_LIEU.C", "wb");
    printf("Nhap so luong hang: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Ten Hang %d: ", i+1);
        fflush(stdin);
        gets(sl.TEN_HANG);
        printf("Don Gia: "); scanf("%d", &sl.DON_GIA);
        printf("So Luong: "); scanf("%d", &sl.SO_LUONG);
        sl.THANH_TIEN=sl.DON_GIA*sl.SO_LUONG;
        tongtien+=sl.THANH_TIEN;
        fwrite(&sl, sizeof(sl), 1, f);

    }
    fclose(f);
    return tongtien;
}

void DocFile()
{
    FILE *f;
    SoLieu sl;
    f=fopen("SO_LIEU.C", "rb");
    int i=1;
    printf("\t\tSO LIEU BAN HANG\n");
    printf("STT    Ten Hang    Don Gia    So Luong    Thanh Tien\n");
    while(fread(&sl,sizeof(sl),1,f)>0)
    {
        printf(" %d     %-9s    %-7d    %-8d    %-10d\n", i+1, sl.TEN_HANG, sl.DON_GIA, sl.SO_LUONG, sl.THANH_TIEN);
    }

    fclose(f);
}

int main()
{
    int tongtien;
    tongtien=GhiFile();
    DocFile();
    printf("\t\t\t\tTong Tien %d", tongtien);
    return 0;
}
