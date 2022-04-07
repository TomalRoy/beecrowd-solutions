#include <stdio.h>
int main()
{
    int n[1000];
    int x;
    scanf("%d",&x);
    int i=0,j=0;
    while(i<1000){
        printf("N[%d] = %d\n",i,j);
        j=j+1;
        if(j==x){
            j=0;
        }
        i=i+1;

    }
    return 0;
}
