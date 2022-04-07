#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,sq=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=3;j++){
            sq=sq*i;
            if(j==3){
                printf("%d",sq);
            }
            else{
                printf("%d ",sq);
            }

        }
        printf("\n");
        sq=1;
    }
    return 0;
}
