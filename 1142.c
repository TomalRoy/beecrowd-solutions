#include <stdio.h>
int main()
{
    int n,n2=-1,n3=-3;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++){
        n2=n2+4;
        n3=n3+4;
        for(j=n3;j<=n2;j++){
            printf("%d ",j);
        }
        printf("PUM\n");
    }
    return 0;
}
