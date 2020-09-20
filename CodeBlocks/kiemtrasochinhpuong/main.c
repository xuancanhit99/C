#include <stdio.h>
#include <stdlib.h>


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("D:\\input.txt", "r",stdin);
    #endif // ONLINE_JUDGE

    unsigned int t, a;
    scanf("%u", &t);
    while(t--)
    {
        scanf("%u", &a);
        if(a==1)
        {
            printf("    1 = 1");
            printf("\n");

        }


        else
        {
            int i=2;
            printf("%5u = ", a);
            while(a>1)
            {

                if(a%i==0)
                {

                    printf("%d" ,i);
                    if (a!=i)
                        printf(" x ");
                    a=a/i;

                }
                else
                    i++;


            }
            printf("\n");
        }


    }
    return 0;
}
