#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char HoTen[50];
    int Tuoi;
    int DiemTB;
}DSSV;


void GhiFile()
{
    FILE *f;
    int i,n;
    DSSV sv;
    f=fopen("DSACH.C", "wb");
    printf("Nhap so luong sinh vien ban dau: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Ho Ten SV %d: ", i+1);
        fflush(stdin);
        gets(sv.Hoten)
        printf("Don Gia: "); scanf("%d", &sv);
        printf("So Luong: "); scanf("%d", &sl.SO_LUONG);
        sl.THANH_TIEN=sl.DON_GIA*sl.SO_LUONG;
        tongtien+=sl.THANH_TIEN;
        fwrite(&sl, sizeof(sl), 1, f);

    }
    fclose(f);
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
        printf(" %d     %-9s    %-7d    %-8d    %-10d\n", i, sl.TEN_HANG, sl.DON_GIA, sl.SO_LUONG, sl.THANH_TIEN);
        i++;
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

