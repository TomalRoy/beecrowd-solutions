#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n],y[n];
    int i;
    float result[n];
    for(i=0;i<n;i++){
        scanf("%d%d",&x[i],&y[i]);
        if(y[i]==0){
           continue;
        }
        else{
            result[i]=(x[i]*1.0)/(y[i]*1.0);
        }
    }
    for(i=0;i<n;i++){
        if(y[i]==0){
            printf("divisao impossivel\n");
        }
        else{
            printf("%.1f\n",result[i]);
        }
    }
    return 0;
}
