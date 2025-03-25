#include<stdio.h>
#include<math.h>
int main()
//tinh gia tri cua giai thua : n! voi n nhap tu ban phim
{
	long int i=1, n, s=1;
	printf(" nhap vao mot so n bat ki :");
	scanf(" %ld", &n);
	for(i ; i <= n ; i++)
	{
		s = s*i;
	}
	printf(" %ld!= %d ",n, s);
	return 0;
}
