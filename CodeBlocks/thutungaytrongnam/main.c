#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d, m, y, a, b, c;
    scanf("%d%d%d", &d, &m, &y);
    a=y%4;
    b=y%100;
    c=y%400;
    if (a==0)
        {
        if ((b!=0) || (c==0))
            {
                if (m==1)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, d, y);
                if (m==2)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+31), y);
                if (m==3)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+60), y);
                if (m==4)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+91), y);
                if (m==5)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+121), y);
                if (m==6)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+152), y);
                if (m==7)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+182), y);
                if (m==8)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+212), y);
                if (m==9)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+244), y);
                if (m==10)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+274), y);
                if (m==11)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+305), y);
                if (m==12)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+335), y);
            }
        else
            {
                if (m==1)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, d, y);
                if (m==2)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+31), y);
                if (m==3)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+59), y);
                if (m==4)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+90), y);
                if (m==5)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+120), y);
                if (m==6)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+151), y);
                if (m==7)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+181), y);
                if (m==8)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+211), y);
                if (m==9)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+243), y);
                if (m==10)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+273), y);
                if (m==11)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+304), y);
                if (m==12)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+334), y);

            }
        }
    else
        {
            if (m==1)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, d, y);
                if (m==2)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+31), y);
                if (m==3)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+59), y);
                if (m==4)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+90), y);
                if (m==5)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+120), y);
                if (m==6)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+151), y);
                if (m==7)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+181), y);
                if (m==8)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+211), y);
                if (m==9)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+243), y);
                if (m==10)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+273), y);
                if (m==11)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+304), y);
                if (m==12)
                    printf("Ngay %d/%d la ngay thu %d cua nam %d", d, m, (int)(d+334), y);
        }

    return 0;
}
