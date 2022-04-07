#include <stdio.h>
int main()
{
    double m[12][12];
    int c;
    char a;
    scanf("%d\n%c",&c,&a);
    int i,j;
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&m[i][j]);
        }
    }
    double sum=0;
    for(i=0;i<12;i++){
        sum=sum+m[i][c];
    }
    if(a=='S'){
        printf("%.1lf\n",sum);
    }
    else{
        double f=sum/12;
        printf("%.1lf\n",f);
    }
    return 0;
}
