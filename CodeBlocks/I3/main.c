#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Câu 3. Viết chương trình nhập vào ba số a, b, c là 3 cạnh của một tam giác. Sau đó in ra màn hình chu vi và diện tích tam giác đó//

int main()
{
    float a, b, c, p;
    printf("Nhap 3 canh cua tam giac:\n");
    printf("Nhap a: "); scanf("%f", &a);
    printf("Nhap b: "); scanf("%f", &b);
    printf("Nhap c: "); scanf("%f", &c);
    p=(a+b+c)/2;
    printf("Chu vi tam giac = %f\n", 2*p);
    printf("Dien tich tam giac = %f", sqrt(p*(p-a)*(p-b)*(p-c)));
    return 0;
}
