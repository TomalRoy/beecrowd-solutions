#include <stdio.h>
 int f(int a)
{
    int j;
    for(j=2;j<a;j++){
        if(a%j==0){
            printf("%d nao eh primo\n",a);
            break;
        }
    }
    if(a==j){
        printf("%d eh primo\n",a);
    }
    return 0;
}
int main()
{
    int n,y;
    scanf("%d",&n);
    int i,x[n];
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++){
        if(x[i]==1){
            printf("%d  eh primo\n",x[i]);
        }
        else{
            y=f(x[i]);
        }
    }
    return 0;

}
