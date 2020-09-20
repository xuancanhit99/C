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

void sapxep_noibot(char st[], int n)
{

    int i, j;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
                if(st[j] > st[j+1])
                {
                    int temp = st[j];
                    st[j] = st[j+1];
                    st[j+1] = temp;
                }
    }
}

void in_slxh(char st[], int n)
{
    int i, j;

    for (i=0;i<n;i++)
    {
        int dem=0;
        if (st[i]!=st[i-1])
            for(j=0;j<n;j++)
            {
                if(st[i]==st[j])
                    dem++;
            }
            printf("%c :%d\n", st[i], dem);


    }



}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("d:\\input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    char st[MAX];
    gets(st);
    int n=strlen(st);
    toin_thuong(st);
    //sapxep_noibot(st,n);
    in_slxh(st,n);
    return 0;
}
