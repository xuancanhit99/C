#include <stdio.h>
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("D:\\input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int t, i, a, b, oa, ob, r, m;
	scanf("%d", &t);
	for (i=1;i<=t;i++)
	{
	    scanf("%d%d", &a, &b);
	    oa=a;
	    ob=b;
	    while (b!=0)
        {
            r=a%b;
            a=b;
            b=r;
        }
        m=(oa/a)*ob;
        printf("LCM(%5d,%5d) = %5d\n", oa, ob, m);


	}
	return 0;
}

