#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int x;
    for(i=2;i<n;i=i+2){
        x=i*i;
        printf("%d^2 = %d\n",i,x);
    }
    if(n%2==0){
        x=n*n;
        printf("%d^2 = %d\n",n,x);
    }
    return 0;

}
