#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, delta, x1, x2;
	printf(" - hay nhap vao gia tri cua a, b, c : ");
	scanf("%f %f %f", &a, &b, &c);
	if(a != 0)
	{
		delta = b*b - 4*a*c;
		printf("\n gia tri cua delta la : %.2f", delta);
		if(delta < 0)
		{
			printf(" \n phuong trinh vo nghiem !");
		}
		else if(delta == 0 )
		{
			x1 = x2 = -b/(2*a);
			printf(" \n phuong trinh co nghiem kep la x1 = x2 = %.2f",x1);
		}
		else if(delta > 0)
		{
			x1 = (-b + sqrt(delta)) / (2*a);
			x2 = (-b - sqrt(delta)) / (2*a);
			printf("\n phuong trinh co hai nghiem phan biet x1, x2 lan luot la : %.2f   %.2f", x1,   x2);
		}
	}
	else
	{
		printf(" - du lieu khong hop le ! , so a phai khac 0");
	}
	return 0;

}
