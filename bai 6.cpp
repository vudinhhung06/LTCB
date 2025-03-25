#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("hay nhap vao mot so nguyen n bat ki :");
	scanf("%d",&n);
	int a[n];
	printf("cac phan tu cua mang lan luot la :");
	for(int i=0 ; i < n ; i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0 ; i < n ; i++)
	{
		if(a[i] < 0)
		a[i] = 0 ;
	}
	printf("mang sau khi thay the cac phan tu am bang 0 la :");
	for(int i=0 ; i < n ; i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
