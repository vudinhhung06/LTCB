#include<stdio.h>
#include<math.h>
int main()
{
	float x ;
	printf(" hay nhap vao mot diem so bat ki : ");
	scanf("%f", &x);
	if( x < 5.0 )
		printf("\n xep loai yeu ");
	else if( x>=5.0 && x<7.0 )
	{
		printf(" \n xep loai trung binh");
	}
	else if( x>=7.0 && x<8.0 )
	{
		printf(" \n xep loai kha ");
	}
	else if( x>=8.0 && x<9.0 )
	{
		printf(" \n xep loai gioi");
	}
	else if( x>=9.0 && x<=10)
	{
		printf(" \n xep loai xuat sac ");
	}
	else 
	{
		printf(" du lieu khong hop le !");
	}
	return 0;
}
