#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int a=rand()%100+1;   //��֤����γ�һ��һ�����ڵ��� 
	
	int x=0;
	int count=0;
	printf("�������һ������");
	do{
		printf("�������") 
		scanf("%d",&x);
		count++;
		if (x>a) {
			printf("��´���");
		}else if (x<a) {
			printf("���С��");
		}
	}while(x!=a);
	printf("�����%d�ξͶ���",count);
}
