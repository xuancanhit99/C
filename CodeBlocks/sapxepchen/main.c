#include <stdio.h>
#include <stdlib.h>

void in_mang(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%4d", a[i]);
    }
    printf("\n");
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("d:\\input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    int n, i;
    scanf("%d", &n);

    int a[n];
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    printf("   0: ");
    for(i=0;i<n;i++)
        printf("%4d",a[i]);
    printf("\n");
    int d=0;
    for (i=1;i<n;i++)
    {


        int temp=a[i];
        int j=i-1;
        while(j>=0)
        {
            if(a[j]>temp)
            {
                d+=1;
                a[j+1]=a[j];
                a[j]=temp;
                printf("%4d: ", d);
                in_mang(a,n);



            }
            j--;

        }

    }
    return 0;
    }

