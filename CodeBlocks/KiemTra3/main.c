#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct
{
    char HoTen[100];
    float DiemTB;
}SinhVien;
long size = sizeof(SinhVien);
FILE *f;
int n=0;
SinhVien sv;
char chon;

void Nhap()
{
    f=fopen("DS.C","wb");
    do
    {
        printf("Nhap sinh vien thu %d\n", ++n);
        printf("Ho Ten: ");
        fflush(stdin);
        gets(sv.HoTen);
        printf("Diem TB SV: "); scanf("%f", &sv.DiemTB);
        fwrite(&sv,sizeof(sv),1,f);
        printf("Co nhap tiep khong: ");
        fflush(stdin);
        chon=getchar();
    }
    while(chon!='k');
    fclose(f);
}

void Them()
{
    f=fopen("DS.C", "ab");
    fseek(f, 0, SEEK_END);
    n=ftell(f)/size;
    do
    {
        printf("Them sinh vien thu %d\n", ++n);
        printf("Nhap Ho Ten: ");
        fflush(stdin);
        gets(sv.HoTen);
        printf("Nhap DiemTB: ");
        scanf("%f", &sv.DiemTB);
        fwrite(&sv, size, 1, f);
        printf("Co them nua khong: ");
        fflush(stdin);
        chon=getchar();
    }
    while(chon!='k');
    fclose(f);

}

void In()
{
    int i=0;
    f=fopen("DS.C","rb");
    printf("Danh Sach Sinh Vien\n");
    printf("STT\tHoten\tDiemTB\n");
    while(fread(&sv,size,1,f)>0)
        printf("%d\t%s\%6.2f\n", ++i, sv.HoTen, sv.DiemTB);
    fclose(f);
    getch();
}


int main()
{
    do
    {
    printf("1.Nhap Sinh Vien\n");
    printf("2.Hien thi danh sach Sinh Vien\n");
    printf("3.Them Sinh Vien\n");
    printf("4.Ket thuc\n");
    printf("Chon chuc nang\n");
    chon=getch();
    switch(chon)
        {
            case '1': Nhap(); break;
            case '2': In();   break;
            case '3': Them(); break;

        }
    }
    while(chon!='4');
    getch();
    return 0;
}
