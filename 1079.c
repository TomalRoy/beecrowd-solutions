#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    double x,y,z,result[n];
    for(i=0;i<n;i++){
        scanf("%lf%lf%lf",&x,&y,&z);
        result[i]=((x*2)+(y*3)+(z*5))/10;
    }
    for(i=0;i<n;i++){
        printf("%.1lf\n",result[i]);
    }
    return 0;
}
