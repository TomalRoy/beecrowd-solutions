#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    char c[n],s[n],e[n];
    int i,sum=0;
    for(i=0;i<n;i++){
        scanf("%d%c%c%c",&a[i],&s[i],&c[i],&e[i]);
        sum=sum+a[i];
    }
    printf("Total: %d cobaias\n",sum);
    int x=0,y=0,z=0;
    for(i=0;i<n;i++){
        if(c[i]=='C'){
            x=x+a[i];
        }
        else if(c[i]=='R'){
            y=y+a[i];
        }
        else{
            z=z+a[i];
        }
    }
    printf("Total de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",x,y,z);
    double q,w,r;
    double m,p,o;
    q=(x*1.0)/(sum*1.0);
    m=q*100;
    w=(y*1.0)/(sum*1.0);
    p=w*100;
    r=(z*1.0)/(sum*1.0);
    o=r*100;
    printf("Percentual de coelhos: %.2lf %%\n",m);
    printf("Percentual de ratos: %.2lf %%\n",p);
    printf("Percentual de sapos: %.2lf %%\n",o);
    return 0;

}
