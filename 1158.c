#include <stdio.h>
int f(int a,int b)
{
    int sum=0,j;
    for(j=1; j<=b; j++)
    {
        sum=sum+a;
        a=a+2;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i,x[n],y[n],result[n],j;
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&x[i],&y[i]);
        if(x[i]%2!=0)
        {
            result[i]=f(x[i],y[i]);
        }
        else
        {
            j=x[i]+1;
            result[i]=f(j,y[i]);
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d\n",result[i]);
    }
    return 0;
}
