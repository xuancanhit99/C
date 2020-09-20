#include <stdio.h>
#include <stdlib.h>

int main()
{
    //#ifndef ONLINE_JUDGE
    //freopen("D:\\input.txt", "r", stdin);
    //#endif // ONLINE_JUDGE
    double a, b, c, d, e, f,D,Dx,Dy;

    scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &e, &c, &d, &f);



    if((a*a)+(b*b)!=0 && (c*c)+(d*d)!=0)
    {
        if (a==0 && b==0 && c==0 && d==0 && e==0 && f==0)
        printf("He phuong trinh co vo so nghiem");
        D=a*d-c*b;
        Dx=e*d-f*b;
        Dy=a*f-c*e;

        if(D!=0)
        {
        printf("He phuong trinh co nghiem duy nhat\n");
        printf("x = %.5lf\n", Dx/D);
        printf("y = %.5lf", Dy/D);
        }
        if(D==0)
        {
        if(Dx!=0 && Dy!=0) printf("He phuong trinh vo nghiem");
        else if(Dx==0 && Dy==0) printf("He phuong trinh co vo so nghiem");
        }
    }
    else
        printf("He phuong trinh vo nghiem");

    return 0;
}
