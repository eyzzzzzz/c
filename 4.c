#include <stdio.h>

int main()
{
	printf("��ֱ����뼸��  ���磺");
	
	int foot; //double foot
	int inch;//double inch
	
	scanf("%d %d",&foot,&inch);//scanf("%lf,%lf",&foot,&inch)
	
	printf("����ǣ�%f�ס�\n",
				((foot+inch/12.0)*0.3048));//((foot+inch/12)*0.3048));
	return 0;	
}
