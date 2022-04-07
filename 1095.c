#include <stdio.h>
int main()
{
    int i=1,j;
    for(j=60;j>=0;j=j-5){
        while(j>i||i>j){
            printf("I=%d J=%d\n",i,j);
            i=i+3;
            break;
        }
    }
    return 0;
}
