#include <stdio.h>
#include <stdlib.h>

//Câu 2. Viết chương trình tính tích cửa 4 số thực được nhập vào từ bàn phím//

int main()
{
    float a, b, c, d;
    printf("Nhap 4 so thuc:\n");
    printf("Nhap so thu nhat: "); scanf("%f", &a);
    printf("Nhap so thu 2: "); scanf("%f", &b);
    printf("Nhap so thu 3: "); scanf("%f", &c);
    printf("Nhap so thu 4: "); scanf("%f", &d);
    printf("Tich cua 4 so vua nhap vao la: %f", a*b*c*d);
    return 0;
}
