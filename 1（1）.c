#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char a[100]={0};	
char b[3];
char c[10];

int get(){//��������a�ҵ�a��Ҫ������ַ����� 
	int i,j,k=0;
	for (i=0;i<strlen(a);i++){
		if (a[i]=='['){
			j=i+1;
			while (a[j]!=']'){//��[]�е����ֶ��� 
				b[k]=a[j]; 
				j++;
				k++;
			}
			break; 
		}
	}
	return atoi(b);//���������ַ����ĳ��� 
} 

int shuru(){
	int i,j,k=0,p=0;
	for (i=0;i<strlen(a);i++){
		j=i+1;p=j;
		if (a[i]=='{'){//����{}�е�ÿһ���ַ� 
			while (a[j]!='}'){
				c[k]=a[j];
				if (a[j]==','&&a[j]=='}'){//������ʱ����k
					c[k]='\0';
					k=0;
					break;
				}
				j++;
				k++;
			}
			
		}//�����һ����
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
	}//����һ������{}��ɾ�� 
	a[p]='\0';
	int t=atoi(c);
    return t;//����{}�е�һ���� 

}

int main(){
	fgets(a,100,stdin);//�����ַ��� 

	int len=0;
	len=get();
	
	int m,n,f=0,d[len],q;//f�����Ƿ������ڳ�ʼ��ֵ��ѭ���У�������Ϊ1 
	char e[len];
	for (m=0;m<strlen(a);m++){
		if (a[m]=='{'){//�����ֲ�ͬ��������ڳ�ʼ��ֵʱ 
			for (q=0;q<len;q++){
				d[q]=0;			
			}//��ʼ������d��ʹd����ֵȫ��Ϊ0 
			for (n=0;n<len;n++){
				if (a[m+1]!='\0'){
					d[n]=shuru();//��{}�е���ȫ����ȡ��d�� 
					for (q=0;q<10;q++){
						c[q]=(char){0};//һ��ѭ������������c 
					}							
				}else{
					d[n]='\0';//��{}�в���������֮�����ѭ�� 
					break;
				}
			}
			for (q=0;q<len;q++){
				printf("%d ",d[q]);				
			}

			f=1;//��ǣ��г�ʼ��ֵ 
			break;
		}
	}
	if (f==0){//�����ڳ�ʼ��ֵʱ 
		for (q=0;q<len;q++){
				e[q]='N';				
		}
		for (q=0;q<len;q++){
			printf("%c ",e[q]);				
		}
	}
	
}
