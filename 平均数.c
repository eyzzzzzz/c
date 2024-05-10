#include <stdio.h>

int main()
{
    int sum=0;
    int count=0;
    int x=0;

    do{
        scanf("%d",&x);
        if (x!=-1){
            count++;
            sum+=x;
        }
    }while(x!=-1);
    printf("%f",1.0*sum/count);

    
}
