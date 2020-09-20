#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1001

char in_thuong(char ch)
{
    if(ch>='A'&&ch<='Z')
        ch+=32;
    return ch;


}

void toin_thuong(char st[])
{
    int n=strlen(st);
    int i;
    for (i=0;i<n;i++)
        st[i]=in_thuong(st[i]); // if(st[i])>'A'&&st[i]<='Z') // st[i]+=32;

}

int solan_xuathien(char ch, char st[])
{
    int dem=0;
    int n=strlen(st);
    int i;
    for(i=0;i<n;i++)
    {
        if(st[i]== ch)
            dem++;
    }
    return dem;
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("e:\\input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    //khai bao bien
    char ch;
    char st[MAX];
    //nhap bien
    scanf("%c ", &ch);
    gets(st);
    //lam bai tap
    //chuan hoa du lieu dau vao
    ch=in_thuong(ch);
    toin_thuong(st);
    printf("%d", solan_xuathien(ch,st));
    return 0;
}
