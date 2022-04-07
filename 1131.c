#include <stdio.h>
int main()
{
    int x,y,n,grenais=0,Inter=0,Gremio=0, Draws=0,i;
    while(2==scanf("%d%d",&x,&y)){
        grenais=grenais+1;
        if(x==y){
             Draws=Draws+1;
        }
        else if(x>y){
            Inter=Inter+1;
        }
        else{
            Gremio=Gremio+1;
        }
        scanf("%d",&n);
        if(n==2){
            break;
        }
    }
    for(i=1;i<=grenais;i++){
        printf("Novo grenal (1-sim 2-nao)\n");
    }
    printf("%d grenais\n",grenais);
    printf("Inter:%d\n",Inter);
    printf("Gremio:%d\n",Gremio);
    printf("Empates:%d\n",Draws);
    if(Inter>Gremio){
        printf("Inter venceu mais\n");
    }
    else if(Gremio>Inter){
        printf("Gremio venceu mais\n");
    }
    else{
        printf("Nao houve vencedor\n");
    }
    return 0 ;

}
