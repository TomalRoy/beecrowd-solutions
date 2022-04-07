#include <stdio.h>
int main()
{
    long long int i, x[61]={0,1};
    for(i=2;i<61;i++){
        x[i]=x[i-2]+x[i-1];
    }
    long long int t,n;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld",&n);
        printf("Fib(%lld) = %lld\n",n,x[n]);
    }
    return 0;


}
