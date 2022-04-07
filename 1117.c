#include <stdio.h>
int main()
{
    float x,sum=0;
    int count=0;
    while(1==scanf("%f",&x)){
        if(x>=0&&x<=10){
            sum=sum+x;
            count=count+1;
            if(count==2){
                break;
            }
        }
        else{
            printf("nota invalida\n");
        }
    }
    float result=sum/count;
    printf("media = %.2f\n",result);
    return 0;
}
