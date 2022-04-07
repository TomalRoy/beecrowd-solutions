#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n],sm;
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    if(x[0]<x[1]){
        sm=x[0];
    }
    else{
        sm=x[1];
    }
    for(i=2;i<n;i++){
        if(sm<x[i]){
            sm=sm;
        }
        else{
            sm=x[i];
        }
    }
    for(i=0;i<n;i++){
        if(sm==x[i]){
            printf("Menor valor: %d\nPosicao: %d\n",sm,i);
            break;
        }
    }
    return 0;

}
