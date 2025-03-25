#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c ;
	printf(" hay nhap vao ba so duong bat ki a, b, c :");
	scanf("%f %f %f", &a, &b, &c);
	if ( ((a+b)>c) || ((a+c)>b) || ((b+c)>a) )
	{
		printf(" \n- ba so a, b, c tao thanh ba canh cua mot tam giac ");
		if(( a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==b*b+a*a))
		{
			printf(" \n- ba so a, b, c tao thanh ba canh cua tam giac vuong ");
		}
		else if( (a==b) || (a==c) || (b==c) )
		{
			printf(" \n- ba so a, b, c tao thanh ba canh cau mot tam giac can");
		}
		else if( (a==b) && (a==c) && (b==c) )
		{
			printf(" \n- ba so a, b, c tao thnah ba canh cua mot tam giac deu");
		}
		else if((( a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==b*b+a*a)) && ((a==b) || (a==b) || ( b==c)))
		{
			printf("-ba so a, b, c tao thanh ba canh cua mot tam giac vuong can");
		}
	}
	else
	{
		printf(" ba so a, b, c khong tao thanh ba canh cua mot tam giac");
	}
	return 0;
}
