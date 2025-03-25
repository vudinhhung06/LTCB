#include<stdio.h>
#include<math.h>
int main()
{
// tinh tong s = 1+ 1/2 +1/3 +..+ 1/n voi n nhap tu ban phim
	int i=1, n;
	float s ;
	printf(" hay nhap so nguyen duong n bat ki :");
	scanf("%d", &n);
	for(i ; i <= n ; i++)
	{
		s += 1.0/i;
	}
	printf("tong s can tinh co gia tri bang : %.2f",s);
	return 0;
}
