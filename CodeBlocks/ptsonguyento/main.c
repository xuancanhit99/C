#include <stdio.h>
#include <math.h>

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("D:\\input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    //////////

    //1 xac dinh so luong test case
    int t;
    scanf("%d", &t);
    //2 xu li tung test case
    int x;

    while(t--) // for(i=1;i<=n;i++)
     {

     //1doc input
        scanf("%d", &x);
        //2giai bai toan kiem tra tinh nguyen to
        //2.1 gia su x la so nguyen to
        int nguyen_to = 1;
        //2.2 xet cac a = 2..x-1.
        //neu x chia het cho a thi x khong phai la so nguyen to
        int a;
        for(a=2;a<=x-1;a++)
        {
            if(x%a==0)
            {
                nguyen_to = 0;
                break;
            }
        }
        //2.3in ket qua

        if(nguyen_to)
            {
                while(int(x%2)==0)
                {

                }

                    dem+=1;




            }
            else
            printf("%d = %d\n", x, x);
     }

    return 0;
}
