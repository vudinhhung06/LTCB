#include<stdio.h>
#include<math.h>
int main()
{
	int  a, b ;
	printf("hay nhap vao hai so bat ki :");
	scanf("%d %d",&a, &b);
	int tong = a + b , hieu = a - b , tich = a*b , thuong = a/b ;
	printf(" tong = %d , hieu = %d , tich = %d , thuong = %d",tong, hieu, tich, thuong);
	if( a%b == 0 )
	{
		printf("\n a/b la phep chia het");
	}
	else
	{
		printf("\n a/b la phep chia du ");
	}
	return 0;
}
