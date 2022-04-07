#include <stdio.h>
int main()
{
    int a,n;
    scanf("%d%d",&a,&n);
    int sum,i;
    if(n>0)
    {
        sum=0;
        for(i=1; i<=n; i++)
        {
            sum=sum+a;
            if(a<=0){
                a=a-1;
            }
            else{
                a=a+1;
            }
        }
        printf("%d\n",sum);
    }
    else
    {
        while(1==scanf("%d",&n))
        {
            if(n>0)
            {
                sum=0;
                for(i=1; i<=n; i++)
                {
                    sum=sum+a;
                    if(a<=0){
                        a=a-1;
                    }
                    else{
                        a=a+1;
                    }
                }
                printf("%d\n",sum);
                break;
            }
        }

    }
    return 0;
}
