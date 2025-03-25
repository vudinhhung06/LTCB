#include<stdio.h>
#include<math.h>
//  S la tong tat ca cac phan tu cua mang 
//  P la trung binh cong cua ca mang
//  M la tong cac so nguyen duong trong mang
//  N la tong cac so nguyen am trong mang
//  h la so luong cac so duong
//  f la so luong cac so am
//  t la trung binh cong so am
//  d la trung binh cong so am
int main()
{
	int n, S=0, M=0, N=0, h=0, f=0;
	float P, t, d;
	printf(" nhap vao so nguyen n bat ki : ");
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++)
	{
		printf("nhap vao phan tu thu %d cua mang:", i+1);
		scanf("%d" , &a[i]);
	}
	for(int i=0; i<n; i++)
	{
		S+= a[i]; // tinh tong cac phan tu cua mang
		P=(1.0)* S/n; // tinh trung binh cong cua mang 
	}
	printf(" -tong cac phan tu cua mang la :%d", S);
	printf(" \n -trung binh cong cua ca mang la :%.2f", P);
	for( int i=0; i<n ; i++)
	{
		if(a[i] > 0)
			M+=a[i]; // tinh tong cac so duong
		else if( a[i] < 0)
			N+=a[i]; // tinh tong cac so am
	}
	printf(" \n -tong cac so nguyen duong trong mang la : %d",M);
	printf("\n -tong cac so nguyen am cua mang la : %d",N);
	for( int i=0 ; i < n ; i++)
	{
		if(a[i] > 0)
		{
			h ++; // dem so luong so duong 
			t =(1.0)*M / h; // tinh trung binh cong so duong
		}
		else if( a[i] < 0)
		{
			f ++; // dem so luong so am
			d =(1.0)*N / f; // tinh trung binh cong so am
		}
	}
	printf(" \n -trung binh cong cac so duong la : %.2f", t);
	printf(" \n -trung binh cong cac so am la :%.2f",d);
	return 0;
}
