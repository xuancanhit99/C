#include <stdio.h>
#include <stdlib.h>

/*Câu 6. Viết chương trình nhập vào từ bàn phím
giá trị GDP của năm 2011 và tốc độ tăng trưởng
kinh tế bình quân (tính theo %). Sau đó tính giá
trị GDP của các năm 2012, 2013 và in ra các giá
trị vừa tính được ra màn hình*/

int main()
{
    float gdp, pt, n1, n2;
    printf("Nhap GDP nam 2011 = "); scanf("%f", &gdp);
    printf("Nhap toc do tang truong = "); scanf("%f", &pt);
    n1 = (gdp/100)*pt + gdp;
    n2 = (n1/100)*pt + n1;
    printf("Gia tri GDP nam 2012 = %.2f\n", n1);
    printf("Gia tri GDP nam 2013 = %.2f", n2);
    return 0;
}
