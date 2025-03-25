#include<stdio.h>
#include<math.h>
int main()
{
	int x,y;
	printf("nhap vao gia tri cua x va y lan luot la thang va nam :  ");
	scanf("%d %d ", &x, &y );
	switch(x)  
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		printf(" \n thang %d nam %d co 31 ngay ",x, y);
		break;
		case 2:
		printf(" \n thang %d nam %d co 28 ngay", x, y);
		break;
		case 4: case 6: case 9: case 11:
		printf(" \n thang %d nam %d co 30 ngay",x, y);
		break;
		default:
			printf(" \n du lieu khong hop le !");
	}
	return 0;
}
