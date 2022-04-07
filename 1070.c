#include <stdio.h>
int main()
{
    int i,x,j;
    scanf("%d",&x);
    i=x+11;
    for(j=x;j<=i;j=j+1){
        if(j%2!=0){
            printf("%d\n",j);
        }
    }
    return 0;
}
