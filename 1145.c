#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int i=1,j;
    while(i<y){
        for(j=1;j<=x;j++){
            if(j==x){
                printf("%d\n",i);
            }
            else{
                printf("%d ",i);
            }
            i=i+1;
            if(i==y){
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;

}
