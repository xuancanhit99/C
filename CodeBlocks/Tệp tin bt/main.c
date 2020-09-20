#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char HoTen[30];
    int Tuoi;
    int DiemTB;
}DSSV;

void GhiFile()
{
    FILE *f;
    int i, n;
    DSSV sv;
    f=fopen("DSACH.C", "wb");
    printf("Nhap so luong sinh vien ban dau: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Ho Ten SV %d: ", i+1);
        fflush(stdin);
        gets(sv.HoTen);
        printf("Tuoi SV %d: "); scanf("%d", &sv.Tuoi);
        printf("Diem TB SV %d: "); scanf("%d", &sv.DiemTB);
        fwrite(&sv,sizeof(sv), 1, f);
    }
    fclose(f);
}

void DocFile
{
    FILE *f;
    DSSV sv;
    int i=1;
    printf("\tDANH SACH SINH VIEN\n");
    printf("STT\t\tHo Ten\t\tTuoi\t\tDiem TB");
}
