#include <stdio.h>
int main()
{
    int n;
    int sum=0,count=0;
    while(1==scanf("%d",&n)){
        if(n<0){
            break;
        }
        sum=sum+n;
        count=count+1;
    }
    float average=(sum*1.0)/count;
    printf("%.2f\n",average);
    return 0;
}
