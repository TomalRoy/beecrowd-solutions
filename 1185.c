#include <stdio.h>
int main()
{
    double m[12][12];
    char c;
    scanf("%c",&c);
    int i,j;
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&m[i][j]);
        }

    }
    double sum=0;
    int temp=11,count=0;
    for(i=0;i<11;i++){
        for(j=0;j<temp;j++){
            sum=sum+m[i][j];
            count=count+1;
        }
        temp=temp-1;
    }
    if(c=='S'){
        printf("%.1lf\n",sum);
    }
    else{
        double g=sum/count;
        printf("%.1lf\n",g);

    }
    return 0;

}
