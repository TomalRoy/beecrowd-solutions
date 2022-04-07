#include <stdio.h>
int main()
{
    int n[100];
    double x;
    scanf("%lf",&x);
    int i=0;
    while(i<100){
        printf("N[%d] = %.4lf\n",i,x);
        x=x/2;
        i=i+1;
    }
    return 0;
}
