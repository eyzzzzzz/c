#include <stdio.h>
#include <math.h>


void turn2(int x){
	switch(x){
		case 1:printf("one");break;
		case 2:printf("two");break;
		case 3:printf("three");break;
		case 4:printf("four");break;
		case 5:printf("five");break;
		case 6:printf("six");break;
		case 7:printf("seven");break;
		case 8:printf("eight");break;
		case 9:printf("nine");break;
		default:break;
	}
}


void turn1(int x,int y){
	if (x==1){
		switch(y){
			case 0:printf("ten");break;
			case 1:printf("eleven");break;
			case 2:printf("twelve");break;
			case 3:printf("thirteen");break;
			case 4:printf("fourteen");break;
			case 5:printf("fifteen");break;
			case 6:printf("sixteen");break;
			case 7:printf("seventeen");break;
			case 8:printf("eightteen");break;
			case 9:printf("nine");break;
			default:break;	
			}	
	}else{
		switch(x){
			case 2:printf("twenty");break;
			case 3:printf("thirty");break;
			case 4:printf("forty");break;
			case 5:printf("fifty");break;
			case 6:printf("sixty");break;
			case 7:printf("seventy");break;
			case 8:printf("eighty");break;
			case 9:printf("ninety");break;
			default:break;
		
		}
		printf("-");
		turn2(y);
	}
}


int main(){
	int a;
	scanf("%d",&a);
	
	int b,c;
	b=a%10;
	c=a/10;
	turn1(c,b);
	
	
}
