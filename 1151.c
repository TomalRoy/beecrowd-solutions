#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,x[n];
    x[0]=0,x[1]=1;
    for(i=2;i<n;i++){
        x[i]=x[i-2]+x[i-1];
    }
    for(i=1;i<=n;i++){
        if(i==n){
            printf("%d\n",x[i-1]);
        }
        else{
            printf("%d ",x[i-1]);
        }
    }
    return 0;

}

