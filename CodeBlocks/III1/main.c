#include <stdio.h>
#include <stdlib.h>


/*Câu 1. Viết chương trình
- Đầu tiên in ra các dòng chữ
    NGON NGU LAP TRINH
- Nếu không bấm phím hoặc bấm một phím khác C và P thì dòng chữ trên tiếp tục hiện ra.
        + Nếu bấm C thì chương trình in ra dòng chữ TURBO C
        + Nếu bấm P thì chương trình in ra dòng chữ TURBO PASCAL
- Bấm phím bất kì thì chương trình kết thúc */


int main()
{
    char c;
    printf("NGON NGU LAP TRINH\n");
    scanf("%c", &c);
    if(c=='C' || c=='P')
    {
        if(c=='C')
            printf("TURBO C");
        else
            printf("TURBO PASCAL");
    }
    else
    printf("NGON NGU LAP TRINH\n");
    return 0;
}
