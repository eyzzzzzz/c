#include <stdio.h>

int main()
{
	printf("请分别输入几尺  几寸：");
	
	int foot; //double foot
	int inch;//double inch
	
	scanf("%d %d",&foot,&inch);//scanf("%lf,%lf",&foot,&inch)
	
	printf("身高是：%f米。\n",
				((foot+inch/12.0)*0.3048));//((foot+inch/12)*0.3048));
	return 0;	
}
