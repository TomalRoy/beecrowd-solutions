#include <stdio.h>
int main()
{
    double m[12][12];
    char a;
    scanf("%c",&a);
    int i,j;
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&m[i][j]);
        }
    }
    double sum=0;
    int count=0;
    for(i=1;i<12;i++){
        for(j=0;j<i;j++){
            sum=sum+m[i][j];
            count=count+1;
        }
    }
    if(a=='S'){
        printf("%.1lf\n",sum);
    }
    else{
        double r=sum/count;
        printf("%.1lf\n",r);
    }
    return 0;
}
