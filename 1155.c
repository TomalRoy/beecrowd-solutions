#include <stdio.h>
int main()
{
    float s=0,n;
    int i;
    float j=1;
    for(i=1;i<=100;i++){
        n=j/i;
        s=s+n;
    }
    printf("%.2f\n",s);
    return 0;
}
