#include <stdio.h>
int main()
{
    int x,y,u,j,i,sum=0;
    scanf("%d%d",&x,&y);
    u=y+1;
    j=x-1;
    for(i=j;u<=i;i--){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
