#include<stdio.h>
#include<math.h>
int tinh_giai_thua(int n)
 {
 	int s = 1 ;
 	for(int i = 1 ; i <= n ; i++)
 	{
 		s = s*i;	
	}
	return s;
 }
int main()
{
	int a ;
	printf(" hay nhap vao so nguyen a bat ki :");
	scanf("%d",&a);
	int ketqua = tinh_giai_thua(a);
	printf("%d! = %d",a, ketqua );
	return 0;
}
