#include <stdio.h>
int main()
{
    int x[100];
    int i;
    for(i=0;i<100;i++){
        scanf("%d",&x[i]);
    }
    int y=0;
    for(i=0;i<100;i++){
        if(x[i]>=y){
            y=x[i];
        }
        else{
            y=y;
        }
    }
    int sum;
    for(i=0;i<100;i++){
        if(y==x[i]){
            sum=i+1;
            break;
        }
    }
    printf("%d\n",y);
    printf("%d\n",sum);
    return 0;
}
