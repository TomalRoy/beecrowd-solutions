#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,x[3];
    for(i=1;i<=n;i++){
        int p=1;
        for(j=0;j<3;j++){
            p=i*p;
            if(j==2){
                printf("%d\n",p);
            }
            else{
                printf("%d ",p);
            }

            x[j]=p;
        }
        printf("%d %d %d\n",x[0],x[1]+1,x[2]+1);
    }
    return 0;
}
