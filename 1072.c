#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    int i,sum=0,sum2=0;
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++){
        if(x[i]>=10&&x[i]<=20){
            sum=sum+1;
        }
        else{
            sum2=sum2+1;
        }
    }
    printf("%d in\n%d out\n",sum,sum2);
    return 0;

}
