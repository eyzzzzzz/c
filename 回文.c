#include <stdio.h>

int main(){
	int n,i,m=0,a,b,c=0;//m用来计数每十个数一行 
	scanf("%d",&n);//输入正整数 
	
	for (i=0;i<=n;i++){
		if (i==0){
			m+=1;
			printf("%d,",i);//i=0单独讨论 
		}else{
			a=i;//保存i这个数，用a来得到回文数 
			while(a>0){
				b=a%10;//得到i的每一位     如123，b分别为3,2,1 
				a=a/10;//a减掉相应的位数          a分别为123,12,1,0 
				c=c*10+b;//c为i的倒叙             c分别为0,3,32,321, 
			} 
			if (i==c){//判断是否回文 
				if (m==9){
					printf("%d,\n",i);
					m=0;//到达十个换行 ，计数清零 
				}else{
					printf("%d,",i);
					m+=1;
				}
			} 
		}
		c=0;
	}
}
