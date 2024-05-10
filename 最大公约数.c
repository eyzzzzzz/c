#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	
	int t;
	if (a<b){
		a,b=b,a;
	}
	
	while (a%b!=0){
		t=a%b;
		a=b;
		b=t;
	}
	
	printf("%d",b);
}
