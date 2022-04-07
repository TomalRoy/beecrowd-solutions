#include <stdio.h>
int main()
{
    int i,j;
    for(i=0,j=1;j<=3;j++){
        printf("I=%d J=%d\n",i,j);
    }
    float x=0.0,y;
    for(i=1;i<=4;i++){
        x=x+0.2;
        for(j=1;j<=3;j++){
            y=j+x;
            printf("I=%.1f J=%.1f\n",x,y);
        }
    }
    for(i=1,j=2;j<=4;j++){
        printf("I=%d J=%d\n",i,j);
    }
    x=1.0;
    for(i=1;i<=4;i++){
        x=x+0.2;
        for(j=1;j<=3;j++){
            y=j+x;
            printf("I=%.1f J=%.1f\n",x,y);
        }

    }
    for(i=2,j=3;j<=5;j++){
        printf("I=%d J=%d\n",i,j);
    }
    return 0;
}
