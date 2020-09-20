#include <stdio.h>
#include <stdlib.h>

/*Câu 5. Viết chương trình nhập tính giá trị chu vi
và diện tích của 1 hình tròn sau đó in các giá trị
vừa tính được ra màn hình trong đó dữ liệu bán kính
của hình tròn được nhập vào từ bàn phím*/

int main()
{
    float x;
    printf("Nhap ban kinh: "); scanf("%f", &x);
    printf("Dien tich cua hinh tron = %.2f\n", 3.14*x*x);
    printf("Chu vi tam giac = %.2f", 2*3.14*x);
    return 0;
}
