#include <stdio.h>
int main()
{
	printf("������һ����λ����");
	int a; 
	scanf("%d",&a);
	
	int b=a/100;
	int c=(a%100)/10;
	int d=(a%100)%10;
	
	printf("%d%d%d",d,c,b);
}
