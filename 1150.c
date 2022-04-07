#include <stdio.h>
int main()
{
    int x,z;
    scanf("%d",&x);
    int i,j=x,count=0;;
    while(1==scanf("%d",&z)){
        if(z>x){
            for(i=x;i<=z;i=i+j){
                count=count+1;
                j=j+1;
            }
            count=count+1;
            printf("%d\n",count);
            break;
        }
    }
    return 0;
}
