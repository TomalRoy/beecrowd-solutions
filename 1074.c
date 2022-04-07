#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++){
        if(x[i]%2==0&&x[i]>0){
            printf("EVEN POSITIVE\n");
        }
        else if(x[i]%2==0&&x[i]<0){
            printf("EVEN NEGATIVE\n");
        }
        if(x[i]%2!=0&&x[i]>0){
            printf("ODD POSITIVE\n");
        }
        else if(x[i]%2!=0&&x[i]<0){
            printf("ODD NEGATIVE\n");
        }
        if(x[i]==0){
            printf("NULL\n");
        }

    }
    return 0;

}
