#include <stdio.h>
int main()
{
    int n[10];
    int x,i;
    scanf("%d",&x);
    for(i=0;i<10;i++){
        printf("N[%d] = %d\n",i,x);
        x=x+x;
    }
    return 0;
}
