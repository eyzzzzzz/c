#include <stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	
	int i,y,x;
	int cut=0;
	for (i=a;i<=a+3;i++){
		for (x=a;x<=a+3;x++){
			for (y=a;y<=a+3;y++){
				if (i!=x){
					if (y!=x){
						if (i!=y){
							cut++;
							if (cut!=6){
								printf("%d%d%d ",i,x,y);
							}else{
								printf("%d%d%d\n",i,x,y);
								cut=0;
							}
						}
					}
				}
			}
		}
	}
}
