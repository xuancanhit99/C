#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct
{
    char TEN_HANG[50];
    int DON_GIA;
    int SO_LUONG;
    int THANH_TIEN;
}SoLieu;



int main()
{
    SoLieu DSBH[5];
    int i, tongtien=0;

    /*for(i=0; i<2; i++)
    {

        printf("Nhap ten hang %d: ", i+1);
        scanf("%s", &DSBH[i].TEN_HANG);
        printf("Don Gia: ");
        scanf("%d", &DSBH[i].DON_GIA);
        printf("So Luong: ");
        scanf("%d", &DSBH[i].SO_LUONG);
        DSBH[i].THANH_TIEN= DSBH[i].SO_LUONG*DSBH[i].DON_GIA;
        tongtien+=DSBH[i].THANH_TIEN;
    }
    */

    //printf("\t\tSO LIEU BAN HANG\n");
    //printf("STT    Ten Hang    Don Gia    So Luong    Thanh Tien\n");
    /*for(i=0; i<2; i++)
    {
        printf(" %d     %-9s    %-7d    %-8d    %-10d\n", i+1, DSBH[i].TEN_HANG, DSBH[i].DON_GIA, DSBH[i].SO_LUONG, DSBH[i].THANH_TIEN);
    }

    printf("\t\t\t\tTong Tien %d", tongtien);
    */

    FILE *fp, *st;
    fp=fopen("SO_LIEU.C", "w+");
    if(fp!=NULL)
    {
        fflush(stdin);
        fputs("\t\tSO LIEU BAN HANG\n", fp);
        fputs("STT    Ten Hang    Don Gia    So Luong    Thanh Tien\n", fp);

    for(i=0; i<2; i++)
    {
        printf("Nhap ten hang %d: ", i+1);
        fflush(stdin);
        scanf("%s", &DSBH[i].TEN_HANG);
        printf("Don Gia: ");
        scanf("%d", &DSBH[i].DON_GIA);
        printf("So Luong: ");
        scanf("%d", &DSBH[i].SO_LUONG);
        DSBH[i].THANH_TIEN= DSBH[i].SO_LUONG*DSBH[i].DON_GIA;
        tongtien+=DSBH[i].THANH_TIEN;
        fprintf(fp, " %d     %-9s    %-7d    %-8d    %-10d\n", i+1, DSBH[i].TEN_HANG, DSBH[i].DON_GIA, DSBH[i].SO_LUONG, DSBH[i].THANH_TIEN);
    }
        fclose(fp);
    }
    else
        printf("Ghi khong thanh cong");




    return 0;
}
