#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int factorial=1;
    for(i=n;i>=1;i--){
        factorial=factorial*i;
    }
    printf("%d\n",factorial);
    return 0;
}
