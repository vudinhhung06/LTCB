#include<stdio.h>
#include<math.h>
int tinh_x_mu_y(int x, int y)
{
	return pow(x,y);
}
int main()
{
	int a,b;
	printf("nhap vao hai so a, b  bat ki :");
	scanf("%d %d", &a, &b);
	int ketqua = tinh_x_mu_y(a,b);
	printf(" %d^%d = %d",a, b, ketqua);
	return 0;
}
