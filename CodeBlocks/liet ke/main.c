#include <stdio.h>
#include <stdlib.h>
int main()
{
	unsigned int a, b, i, j, flag;
	scanf("%u%u", &a, &b);
	for(i=a+1; i<b; i++)
	{
		flag=1;
		for(j=2; j<=i/2; ++j)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
			printf("%u\n", i);
	}

	return 0;
}
