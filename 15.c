#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	
	int i;
	int f=0;
	for (i=2;i<=x/2;i++){
		if (x%i==0){
			f=1;
			break;
		}else{
			f=0;
		}
	}		
	if (f=1){
		printf("这个数不是素数");
	}else{
		printf("这个数是素数");
	}
}
