#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n],y[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d%d",&x[i],&y[i]);
    }
    int j,sum=0,sum1=0,sum2=0;
    for(i=0;i<n;i++){
        if(x[i]>y[i]){
            for(j=y[i]+1;j<x[i];j++){
                if(j%2!=0){
                    sum=sum+j;
                }
            }
            printf("%d\n",sum);
            sum=0;
        }
        else if(y[i]>x[i]){
            for(j=x[i]+1;j<y[i];j++){
                if(j%2!=0){
                    sum1=sum1+j;
                }
            }
            printf("%d\n",sum1);
            sum1=0;
        }
        else{
            sum2=0;
            printf("%d\n",sum2);
        }
    }
    return 0;

}
