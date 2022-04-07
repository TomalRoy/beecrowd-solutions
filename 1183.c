#include <stdio.h>
int main()
{
    double m[12][12];
    int i,j;
    char o;
    scanf("%c",&o);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&m[i][j]);
        }
    }
    double sum=0;
    int count=0;
    j=1;
    for(i=0;i<11;i++){
        j=j+i;
        while(j<12){
            sum=sum+m[i][j];
            count=count+1;
            j=j+1;
        }
        j=1;
    }
    if(o=='S'){
        printf("%.1lf\n",sum);
    }
    else{
        double s=sum/count;
        printf("%.1lf\n",s);
    }
    return 0;

}
