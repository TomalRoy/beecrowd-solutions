#include <stdio.h>
int f (int a)
{
    int i,even=0;
    for(i=1;i<=5;i++){
        even=even+a;
        a=a+2;
    }
    return even;
}
int main()
{
    int x,result;
    while(1==scanf("%d",&x)){
        if(x==0){
            break;
        }
        if(x%2==0){
            result=f(x);
            printf("%d\n",result);
        }
        else{
            x=x+1;
            result=f(x);
            printf("%d\n",result);
        }
    }
    return 0;
}
