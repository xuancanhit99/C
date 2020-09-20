#include <stdio.h>
#include <math.h>

int main()
{
    //#ifndef ONLINE_JUDGE
    //freopen("D:\\input.txt", "r", stdin);
    //#endif // ONLINE_JUDGE




    unsigned int m, n, i, x;
    scanf("%u%u", &m, &n);
    if (m%2==0)
    {
        if(m==2)
            printf("2\n");
        for(i=m+1;i<=n;i=i+2)
         {
            x=i;
            int nguyen_to = 1;
            int a;
            for(a=2;a<=x-1;a++)
            {
                if(x%a==0)
                {
                    nguyen_to = 0;
                    break;
                }
            }
            if(nguyen_to)
                printf("%u\n", x);
         }
    }
    else
    {

        for(i=m;i<=n;i=i+2)
         {
            if(i==1)
                x=i+1;
            else
                x=i;
            int nguyen_to = 1;
            int a;
            for(a=2;a<=x-1;a++)
            {
                if(x%a==0)
                {
                    nguyen_to = 0;
                    break;
                }
            }
            if(nguyen_to)
                printf("%u\n", x);
         }
    }


    return 0;
}
