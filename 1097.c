#include <stdio.h>
int main()
{
    int i,j=7,z=7,k;
    for(i=1;i<=9;i=i+2){
        for(k=1;k<=3;k++){
            printf("I=%d J=%d\n",i,j);
            j=j-1;
        }
        z=z+2;
        j=z;
    }
    return 0;
}
