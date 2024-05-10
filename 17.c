#include <stdio.h>

int main()
{
	int n;    //f(n)=1/1+1/2+1/3+1/4+...+1/n 
	int i;
	double sum;
	
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		sum+=1.0/i;
	}
	printf("f(%d)=%f",n,sum);
}
