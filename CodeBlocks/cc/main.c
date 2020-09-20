#include <stdio.h>
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("d:\\input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    ///////////////////////////////////////////////

    //1. Xác định số lượng testcase
    int t;
    scanf("%d", &t);

    //2. Giải từng testcase
    int m, n;
    while(t--)
    {
        //2.1. Đọc kích thước m, n
        scanf("%d %d", &m, &n);

        //2.2. Vẽ hình chữ nhật m dòng n cột
        int i,j;
        for(i=1; i<=m; i++)
        {
            for(j=1; j<=n; j++)
            {
                //In ký tự ở dòng i, cột j
                if(i==1||i==m||j==1||j==n)
                    printf("*");
                else
                    printf(" ");
            }
            //Xuống dòng
            printf("\n");
        }


        //2.3. In một dòng trắng
        printf("\n");
    }

	return 0;
}
