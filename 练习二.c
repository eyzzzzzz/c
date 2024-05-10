#include <stdio.h>

int main()
{
	int start;
	int jian;
	printf("请输入现在时间及流逝时间："); 
	scanf("%d %d",&start,&jian);
	
	int shi=start/100;
	int fen=start%100;
	int xian=shi*60+fen;
	int zong=xian+jian;
	int shi1=zong/60;
	int fen1=zong%60;
	int zhong=shi1*100+fen1;
	
	printf("终止时间为%d",zhong);
	
	return 0;
}
