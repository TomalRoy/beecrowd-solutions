#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,x;
    for(i=1;i<=10;i++){
        x=i*n;
        printf("%d x %d = %d\n",i,n,x);
    }
    return 0;
}
