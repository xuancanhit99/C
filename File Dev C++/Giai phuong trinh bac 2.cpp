#include <stdio.h>
#include <math.h>

int main ()
{
	float a, b, c, x1;
	printf("Nhap a, b, c = ");
	scanf("%f %f %f", &a, &b, &c);
	if(a==0)
		if(b==0)
			if(c==0)
				printf("Moi x la nghiem");
			else
				printf("Phuong trinh vo nghiem");
		else
		{
			x1=-c/b;
			printf("Phuong trinh co nghiem duy nhat x = %f", x1);
		}
	else
	{
		float d = b*b - 4*a*c;
		float x2, x3;

		if (d==0)
			printf("Phuong trinh co nghiem kep x1 = x2 = %f", x1=(float)(-b/(2*a)));
		if (d>0)
			{
				x2=(-b+sqrt(d))/(2*a);
				x3=(-b-sqrt(d))/(2*a);
				printf("Phuong trinh co 2 nghiem phan biet\n");
				printf("x1 = %f\n", x2);
				printf("x2 = %f\n", x3);
			}
		else
			printf("Phuong trinh vo nghiem");

	}
	return 0;
}

