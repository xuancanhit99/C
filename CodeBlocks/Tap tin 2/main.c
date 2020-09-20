#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    FILE *fp, *st;
    int i, n[20], s[20];
    fp=fopen("D:\\SO_NGUYEN.DAT", "wt");
    if(fp!=NULL)
    {
        for(i=0; i<10; i++)
        {
            printf("n[%d]= ", i);
            scanf("%d", &n[i]);
            fprintf(fp, "%d\n", n[i]);

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
