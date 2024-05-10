#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	
	int a=0;
	int b=0;
	while (x!=0){
		a=x%10;
		x=x/10;
		b=b*10+a;
	}
	
	printf("%d",b);
	
}
