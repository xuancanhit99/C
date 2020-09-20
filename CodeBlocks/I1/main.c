#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Câu 1. Viết chương trình tính x lũy thừa y với các giá trị x và y được nhập vào từ bàn phím//

int main()
{
    float x, y;
    printf("Nhap x: ");scanf("%f", &x);
    printf("Nhap y: ");scanf("%f", &y);
    printf("x^y = %f", pow(x,y));
    return 0;
}
