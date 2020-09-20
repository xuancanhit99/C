#include <stdio.h>
#include <stdlib.h>


//Câu 1: Viết chương trình tình x lũy thừa y với các giá trị y được nhập vào từ bàn phím//

int main()
{
    float x, y;
    printf("Nhap x: "); scanf("%d", &x);
    printf("Nhap y: "); scanf("%d", &y);
    printf("x^y = %d", pow(x,y));
    return 0;
}
