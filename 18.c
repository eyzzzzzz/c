#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	
	int a=0;
	while (x!=0){
		a=a*10+x%10;
		x/=10;
	}
	//printf("%d",a);
	do{
		if (a>9){
			printf("%d ",a%10);
		}else{
			printf("%d",a%10);
		}
		a/=10;
	}while (a!=0); 
}
