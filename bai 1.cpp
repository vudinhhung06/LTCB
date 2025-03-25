#include<stdio.h>
#include<math.h>
int main()
{
	float x, a, b, c; 
	printf("hay nhap mot so bat ki x = ");
	scanf(" %f",&x);
	a = pow(x,2);
	b = pow(x,3);
	c = pow(x,4);
	printf("a = x^2 = %.2f , b = x^3 =  %.2f , c = x^4 =  %.2f  ",a, b, c);
	return 0;
	
}
