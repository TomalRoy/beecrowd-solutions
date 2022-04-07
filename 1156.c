#include <stdio.h>
int f(int a,int b)
{
    int i,r=1;
    for(i=1;i<=b;i++){
       r=r*a;
    }
    return r;

}
int main()
{
    int i,j,sq,x=2,n=1;
    float sum=1;
    for(i=3;i<=39;i=i+2){
        sq=f(x,n);
        sum=sum+(i*1.0)/sq;
        n=n+1;

    }
    printf("%.2f\n",sum);

    return 0;
}
