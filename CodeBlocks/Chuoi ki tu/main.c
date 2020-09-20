#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int tuoi;
    //int i;
    char c[5]= "ch";
    char ten[31];
    printf("Nhap tuoi: ");
    scanf("%d", &tuoi);
    printf("Nhap ten: ");
    fflush(stdin);
    gets(ten);
    printf("Ten: ");
	printf(ten);
    printf("Tuoi: %d\n", tuoi);
    if(strstr(ten,c)!=NULL)
        printf("Chuoi tren co ch\n");
    else
        printf("Chuoi tren khong co ch\n");
    strcat(ten,c);
    printf("Ten: ");
    puts(ten);
	return 0;
}
