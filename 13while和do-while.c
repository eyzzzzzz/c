#include <stdio.h>

int main()
{
		int x;
	scanf("%d",&x);
	int n=0;
	do
	{
		x/=10;    //先进循环条件，之后判断成不成立 
		n++;
	}while(x>0);
	printf("%d",n);

	int y;
	scanf("%d",&y);
	int m=0;
	while (y>0){    //先判断成不成立后进循环 
		y/=10;
		m++;
	}
	printf("%d",m);
}
