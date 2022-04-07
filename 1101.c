#include <stdio.h>
int main()
{
    int m,n,i;
    while(2==scanf("%d%d",&m,&n)){
        if(m<=0||n<=0){
            break;
        }
        int sum=0;
        if(m>n){
            for(i=n;i<=m;i++){
                printf("%d ",i);
                sum=sum+i;
            }
            printf("Sum=%d\n",sum);
        }
        else if(m==n){
            printf("%d %d ",m,n);
            sum=m+n;
            printf("Sum=%d\n",sum);
        }
        else{
            for(i=m;i<=n;i++){
                printf("%d ",i);
                sum=sum+i;
            }
            printf("Sum=%d\n",sum);
        }
    }
    return 0;
}
