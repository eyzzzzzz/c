#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char a[100]={0};	
char b[3];
char c[10];

int get(){//遍历数组a找到a需要输入的字符个数 
	int i,j,k=0;
	for (i=0;i<strlen(a);i++){
		if (a[i]=='['){
			j=i+1;
			while (a[j]!=']'){//将[]中的数字读出 
				b[k]=a[j]; 
				j++;
				k++;
			}
			break; 
		}
	}
	return atoi(b);//返回输入字符串的长度 
} 

int shuru(){
	int i,j,k=0,p=0;
	for (i=0;i<strlen(a);i++){
		j=i+1;p=j;
		if (a[i]=='{'){//遍历{}中的每一个字符 
			while (a[j]!='}'){
				c[k]=a[j];
				if (a[j]==','&&a[j]=='}'){//遇到，时重置k
					c[k]='\0';
					k=0;
					break;
				}
				j++;
				k++;
			}
			
		}//输出第一个数
	}	
	
	for (i=0;i<strlen(a);i++) {
		if (a[i]=='{'){
			j=i+1;p=j;
			while (a[j]!='}'){
				while (a[j]!=','&&a[j]!='}'){
					j++;
				}
				if (a[j]=='}'){
					a[p]='}';
				}else{
					for (k=j+1;k<strlen(a);k++){
						a[p]=a[k];
						p++;					
					}
				}
				break;
			}
		}
	}//将第一个数从{}中删除 
	a[p]='\0';
	int t=atoi(c);
    return t;//返回{}中第一个数 

}

int main(){
	fgets(a,100,stdin);//输入字符串 

	int len=0;
	len=get();
	
	int m,n,f=0,d[len],q;//f代表是否进入存在初始赋值的循环中，进入则为1 
	char e[len];
	for (m=0;m<strlen(a);m++){
		if (a[m]=='{'){//分两种不同情况，存在初始赋值时 
			for (q=0;q<len;q++){
				d[q]=0;			
			}//初始化数组d，使d中数值全部为0 
			for (n=0;n<len;n++){
				if (a[m+1]!='\0'){
					d[n]=shuru();//将{}中的数全部读取到d中 
					for (q=0;q<10;q++){
						c[q]=(char){0};//一轮循环后重置数组c 
					}							
				}else{
					d[n]='\0';//当{}中不存在数字之后结束循环 
					break;
				}
			}
			for (q=0;q<len;q++){
				printf("%d ",d[q]);				
			}

			f=1;//标记，有初始赋值 
			break;
		}
	}
	if (f==0){//不存在初始赋值时 
		for (q=0;q<len;q++){
				e[q]='N';				
		}
		for (q=0;q<len;q++){
			printf("%c ",e[q]);				
		}
	}
	
}
