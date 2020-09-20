#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
//Ham kiem tra tinh doi xung
int ktdoixung(char c[MAX])
{
    int i,j;
    int n=strlen(c);
    for(i=0,j=n-1;i<=j;i++,j--)
        if(c[i]!=c[j])
            return 0;
    return 1;
}

	void daonguoc (char x[])
		{
			int k=strlen(x);
		for(int i=k;i>=0;i--)
			printf("%c",x[i]);

		}

int main()
{
    char c[MAX];
    printf("Nhap xau: ");
    fflush(stdin);
    gets(c);
    if (ktdoixung(c)==1)
    {
        printf("Xau doi xung\n");
        printf("Xau dao nguoc la: ");
        daonguoc(c);
    }

    else
    {
        printf("Xau khong doi xung\n");
        printf("Xau dao nguoc la: ");
        daonguoc(c);
    }

    return 0;
}
