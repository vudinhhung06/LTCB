#include<stdio.h>
#include<math.h>
int main()
{
	int n ; 
	printf("hay nhap so mot so nguyen n bat ki : ");
	scanf("%d",&n);
	int a[n];
	for(int i=0 ; i < n ; i++)
	{
		printf(" hay nhap vao phan tu thu %d cua mang :", i+1);
		scanf("%d",&a[i]);
	}
	int x, m=0 ;
	printf("hay nhap vao so nguyen x bat ki :");
	scanf("%d",&x);
	for(int i=0 ; i < n ; i++)
	{
		if(a[i] == x )
			m++;
	}
	printf(" \n phan tu %d xuat hien %d lan trong mang ", x, m );
	return 0;
}
