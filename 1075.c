#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=2;i<=10000;i=i+n){
        printf("%d\n",i);
    }
    return 0;
}
