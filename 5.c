#include <stdio.h>

int main()
{
	int hour1,minute1;
	int hour2,minute2;
	
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	
	int a=hour1*60+minute1;
	int b=hour2*60+minute2;
	int c=a-b;
	
	printf("����ʱ���ǣ�%dʱ��%d��",c/60,c%60);
 } 
