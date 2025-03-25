#include<stdio.h>
#include<math.h>
int main()
// viet chuong trinh nhap vao so n va in ra cac uoc cua n 
{
	long int  i=1, n ;
	printf(" hay nhap vao so nguyen n  bat ki : ");
	scanf(" %ld",&n);
	printf("\n  cac uoc cua %ld la : ",n);
	for(i; i<=n ; i++)
	{
		if(n%i==0){
		printf(" %ld ", i);}
	}
	return 0;
}
