#include <stdio.h>
#include <stdlib.h>

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("D:\\input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int x, a, b, c, n, t;
    scanf("%d%d%d", &n, &t, &x);
    a=x%4;
    b=x%100;
    c=x%400;
    if (a==0)
        {
        if ((b!=0) || (c==0))
            {
                if ((t<13)&&(t>0))
                    {
                        if ((t==1) || (t==3) || (t==5) || (t=7) || (t=8) || (t=10) || (t=12))
                            {
                                if (n>0 && n<32)
                                    printf("%d/%d/%d: hop le", n, t, x);
                                else
                                    printf("%d/%d/%d: khong hop le", n, t, x);
                            }
                        if (t==2)
                            {
                                if (n>0 && n<30)
                                    printf("%d/%d/%d: hop le", n, t, x);
                                else
                                    printf("%d/%d/%d: khong hop le", n, t, x);
                            }
                        if (t==4 || t==6 || t==9 || t==11)
                            {
                                if (n>0 && n<31)
                                    printf("%d/%d/%d: hop le", n, t, x);
                                else
                                    printf("%d/%d/%d: khong hop le", n, t, x);
                            }
                    }
                else
                    printf("%d/%d/%d: khong hop le", n, t, x);


            }
        else
            {
                                if ((t<13)&&(t>0))
                    {
                        if ((t==1) || (t==3) || (t==5) || (t=7) || (t=8) || (t=10) || (t=12))
                            {
                                if (n>0 && n<32)
                                    printf("%d/%d/%d: hop le", n, t, x);
                                else
                                    printf("%d/%d/%d: khong hop le", n, t, x);
                            }
                        if (t==2)
                            {
                                if (n>0 && n<29)
                                    printf("%d/%d/%d: hop le", n, t, x);
                                else
                                    printf("%d/%d/%d: khong hop le", n, t, x);
                            }
                        if (t==4 || t==6 || t==9 || t==11)
                            {
                                if (n>0 && n<31)
                                    printf("%d/%d/%d: hop le", n, t, x);
                                else
                                    printf("%d/%d/%d: khong hop le", n, t, x);
                            }
                    }
                else
                    printf("%d/%d/%d: khong hop le", n, t, x);

            }
        }
    else
        {
                            if ((t<13)&&(t>0))
                    {
                        if ((t==1) || (t==3) || (t==5) || (t=7) || (t=8) || (t=10) || (t=12))
                            {
                                if (n>0 && n<32)
                                    printf("%d/%d/%d: hop le", n, t, x);
                                else
                                    printf("%d/%d/%d: khong hop le", n, t, x);
                            }
                        if (t==2)
                            {
                                if (n>0 && n<29)
                                    printf("%d/%d/%d: hop le", n, t, x);
                                else
                                    printf("%d/%d/%d: khong hop le", n, t, x);
                            }
                        if (t==4 || t==6 || t==9 || t==11)
                            {
                                if (n>0 && n<31)
                                    printf("%d/%d/%d: hop le", n, t, x);
                                else
                                    printf("%d/%d/%d: khong hop le", n, t, x);
                            }
                    }
                else
                    printf("%d/%d/%d: khong hop le", n, t, x);

        }
    return 0;
}
