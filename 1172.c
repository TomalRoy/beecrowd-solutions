#include <stdio.h>
int main()
{
    int x[10],a=1,i;
    for(i=0;i<10;i++){
        scanf("%d",&x[i]);
        if(x[i]<=0){
            printf("X[%d] = %d\n",i,a);
        }
        else{
            printf("X[%d] = %d\n",i,x[i]);
        }
    }
    return 0;
}
