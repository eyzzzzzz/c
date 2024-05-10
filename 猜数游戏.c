#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int a=rand()%100+1;   //保证随机形成一个一百以内的数 
	
	int x=0;
	int count=0;
	printf("我已想好一个数：");
	do{
		printf("请猜数：") 
		scanf("%d",&x);
		count++;
		if (x>a) {
			printf("你猜大了");
		}else if (x<a) {
			printf("你猜小了");
		}
	}while(x!=a);
	printf("你猜了%d次就对了",count);
}
