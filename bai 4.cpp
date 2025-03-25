#include<stdio.h>
#include<math.h>
int main()
{
	float r , pi = 3.14;
	printf(" hay nhap vao ban kinh cua hinh cau :");
	scanf(" %f", &r);
	float S = 4*pi*pow(r,2) , V = (4/3)*pi*pow(r,3);
	printf( "dien tich cua hinh cau la:S =%.2f, the tich cua hinh cau la:V =%.2f",S,V  );
	return 0;
}
