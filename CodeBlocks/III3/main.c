#include <stdio.h>
#include <stdlib.h>

/*Câu 3. Viết chương trình nhập phần thực x và phần ảo y của một số phức sau đó in ra theo mẫu (x, y) với yc:
- Số in ra có hai chữ số sau dấu chấm thập phân
- Kết quả in ra tạo thành một dãy kí tự liên tiếp nhau(không có khoảng trống) */

int main()
{
    float x, y;
    printf("Nhap x: "); scanf("%f", &x);
    printf("Nhap y: "); scanf("%f", &y);
    printf("(%.2f, %.2f)", x, y);
    return 0;
}
