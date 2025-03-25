#include<stdio.h>
#include<math.h>
// m la vi tri cua so lon nhat cua mang
// max la so lon nhat cua mang
// d la vi tri cua so nho nhat cua mang
// miin la so nho nhat cua mang
int main()
{
	int n, max, m, min, d;
	printf(" hay nhap vao so mguyen duong n bat ki:");
	scanf("%d", &n);
	int a[n] ;
	for(int i=0 ; i < n ; i++)
	{
		printf(" n hay nhap vao phan tu thu %d cua mang:", i+1);
		scanf("%d", &a[i] );	
	}
	max = a[0]; // gan so lon nhat la phan tu thu 0 cua mang
	m = 0; // gan vi tri so lon nhat 
	for(int i=0 ; i < n ; i++)
	{
		if( a[i] > max)
		{
			max = a[i];
			m = i+1;
		}
		
	}
	min = a[1]; // gan so nho nhat la phan tu thu 1 cua mang
	d = 0; // gan vi tri so nho nhat
	for(int i=0 ; i < n ; i++)
	{
		if( a[i] < min )
		{
			min = a[i];
			d = i+1;
		}
	}
	printf("phan tu lon nhat cua mang la %d va no la phan tu thu %d.\n ", max,m);
	printf("phan tu nho nhat cua mang la %d va no la phan tu thu %d. ", min,d);
	return 0;
}
