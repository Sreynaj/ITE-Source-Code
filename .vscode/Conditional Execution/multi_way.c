#include<stdio.h>

int main(){
    int discount;
    int money;// before discount
    int total; // after discount 

    printf("How much do you spend on these:");
    scanf("%d", &money);

    if (money >= 200 ){
        total = money - (0.02*money);
        printf("Total payment: %d" , total);
    }
    else if (money>= 400)
    {
        total = money - (0.05*money);
        printf("Total payment: %d" , total);
    }
    else if (money >= 800)
    {
        total = money - (0.1*money);
        printf("Total payment: %d" , total);
    }
    else if (money>=1000)
    {
        total = money - (0.15*money);
        printf("Total payment: %d " , total);
    }
    
    
}

    
   

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
