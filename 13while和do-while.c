#include <stdio.h>

int main()
{
		int x;
	scanf("%d",&x);
	int n=0;
	do
	{
		x/=10;    //�Ƚ�ѭ��������֮���жϳɲ����� 
		n++;
	}while(x>0);
	printf("%d",n);

	int y;
	scanf("%d",&y);
	int m=0;
	while (y>0){    //���жϳɲ��������ѭ�� 
		y/=10;
		m++;
	}
	printf("%d",m);
}
