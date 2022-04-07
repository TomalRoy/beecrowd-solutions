#include <stdio.h>
int main()
{
    double m[12][12];
    int l;
    char t;
    scanf("%d\n%c",&l,&t);
    int i,j;
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&m[i][j]);
        }
    }

    double sum=0;
    for(i=0;i<12;i++){
        sum=sum+m[l][i];
    }
    if(t=='S'){
        printf("%.1lf\n",sum);
    }
    else{
        double a=sum/12;
        printf("%.1lf\n",a);
    }

    return 0;
}
