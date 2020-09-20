#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <conio.h>
#define MAX 100


typedef struct SinhVien
{
    char HoTen[100];
    float DiemTB;
    struct SinhVien *tiep;
}pSV;
pSV *pDau, *pCuoi, *p;

void Nhap()
{
    char HT[30], chon;
    int stt=1;
    float x;
    printf("Nhap danh sach sinh vien\n");
    pDau = NULL;
    do
    {
        fflush(stdin);
        printf("Nhap thong tin sinh vien thu %d\n", stt);
        stt++;
        printf("Nhap ho ten: ");
        fflush(stdin);
        gets(HT);
        printf("Nhap diem trung binh: ");
        scanf("%f", &x);
        p=(pSV *)malloc(sizeof(pSV));
        strcpy(p->HoTen, HT);
        p->DiemTB = x;
        if(pDau == NULL)
        {
            pDau = p;
            pCuoi = p;
        }
        else
        {
            pCuoi->tiep = p;
            pCuoi = p;
        }
        p->tiep = NULL;
        printf("Co nhap nua khong?");
        fflush(stdin);
        chon = getchar();
    } while(chon != 'k');
}


void In()
{
    int stt = 1;
    printf("Danh sach sinh vien\n");
    printf("STT\tHo Ten\t\tDiem Trung Binh\n");
    p=pDau;
    while(p!=NULL)
    {
        printf("%d\t%s\t%6.2f\n", stt,p->HoTen, p->DiemTB);
        stt++;
        p=p->tiep;
    }
    getch();
}

void Them()
{
    pSV *pTim;
    float x;
    char HT[30];
    p=(pSV *)malloc(sizeof(pSV));
    printf("Nhap ho ten sinh vien can them: ");
    fflush(stdin);
    gets(p->HoTen);
    printf("Nhap diem trung binh: ");
    scanf("%f", &x);
    p->DiemTB = x;
    p->tiep = NULL;
    printf("Them sau sinh vien nao: ");
    fflush(stdin);
    gets(HT);
    pTim = pDau;
    while((pTim!=NULL) && (strcmpi(pTim->HoTen, HT)))
        pTim=pTim->tiep;
    if(pTim == NULL)
        printf("Khong tim thay vi tri can them");
    else
    {
        if(pTim->tiep==NULL)
            pTim->tiep=p;
        else
        {
            p->tiep=pTim->tiep;
            pTim->tiep=p;
        }
        printf("Da them xong\n");
    }
    getch();
}

int main()
{
    int chon;

    do
    {
    printf("1.Nhap Sinh Vien\n");
    printf("2.Hien thi danh sach Sinh Vien\n");
    printf("3.Them Sinh Vien\n");
    printf("4.Ket thuc\n");
    printf("Chon chuc nang\n");
    scanf("%d", &chon);

        switch(chon)
        {
            case 1: Nhap(); break;
            case 2: In();   break;
            case 3: Them(); break;

        }
    }
    while(chon!=4);
    return 0;
}
