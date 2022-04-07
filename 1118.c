#include <stdio.h>
int f ()
{
    int x;
    while(1==scanf("%d",&x)){
        if(x<1||x>2){
            printf("novo calculo (1-sim 2-nao)\n");
        }
        else{
            printf("novo calculo (1-sim 2-nao)\n");
            break;
        }
    }
    return x;
}
int main()
{
    double  n,sum=0;
    int count=0,call;
    double result;
    while(1==scanf("%lf",&n))
    {
        if(n>=0&&n<=10)
        {
            sum=sum+n;
            count=count+1;
            if(count==2){
                result=sum/count;
                printf("media = %.2lf\n",result);
                sum=0;
                count=0;
                call=f();
                if(call==2){
                    break;
                }
            }
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    return 0;
}
