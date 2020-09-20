#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Câu 1. Viết chương trình giải pt bậc 2:
    ax^2 + bx + c = 0*/

int main()
{
    float a, b, c, D, x1, x2;
    printf("Nhap a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    if(a==0)
    {
        if(b==0)
        {
            if(c==0)
                printf("Phuong trinh co vo so nghiem\n");
            else
                printf("Phuong trinh vo nghiem\n");
        }
        else
        {
            x1=-c/b;
            printf("Phuong trinh co nghiem duy nhat x = %.2f\n", x1);
        }
    }
    else
    {
        D=b*b-4*a*c;
        if(D>0)
        {
            x1=(-b+sqrt(D))/(2*a);
            x2=(-b-sqrt(D))/(2*a);
            printf("Phuong trinh co 2 nghiem phan biet\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f", x2);
        }
        if(D==0)
        {
            x1=-b/(2*a);
            printf("Phuong trinh co nghiep kep\n");
            printf("x1 = x2 = %.2f", x1);
        }
        if(D<0)
            printf("Phuong trinh vo nghiem");
    }
    return 0;
}
