#include <stdio.h>
int main()
{
    int x,Alcohol=0,Gasoline=0,Diesel=0;
    while(1==scanf("%d",&x)){
        if(x==4){
            break;
        }
        if(x==1){
            Alcohol=Alcohol+1;
        }
        else if(x==2){
            Gasoline=Gasoline+1;
        }
        else if(x==3){
            Diesel=Diesel+1;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n",Alcohol,Gasoline,Diesel);
    return 0;

}
