#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    FILE *fp, *st;
    int i, n[20], s[20];
    char ten[20];
    int x;
    printf("Nhap tep van ban: ");
    gets(ten);
    scanf("%d",&x);

    fp=fopen(ten, "wt");
    if(fp!=NULL)
    {
        for(i=0; i<x; i++)
        {
            printf("n[%d]= ", i);
            scanf("%d", &n[i]);
            if((i%10)==0)
                fprintf(fp, "%d\n", n[i]);
            else
                fprintf(fp, "%d  ", n[i]);


        }
        fclose(fp);
    }
    else
        printf("ghi khong thanh cong");
    int k=0;
    st=fopen("D:\\SO_NGUYEN.DAT", "rt");
    while((!feof(st))&&(k<10))
    {
        fscanf(st,"%s", s);
        fflush(stdin);
        printf("%s\n", s);
        k++;
    }

    fclose(st);
    return 0;
}
