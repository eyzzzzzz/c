#include <stdio.h> 

int main(){
	int a;
	scanf("%d",&a);
	float fees;
	
	if (a<=200){
		fees=a*0.8;
		if (fees<=100){
			fees=100;
		}
	}else if (a>200&&a<=300){
		fees=160+(a-200)*0.9;
	}else{
		fees=250+(a-300)*1;
		if (fees>400){
			fees=fees+fees*0.15;
		}
	}
	
	printf("%.2f",fees);
}
