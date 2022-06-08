#include<stdio.h>

int main(){
    int payment;// before discount
    int total; // after discount 

    printf("How much do you spend on these?:");
    scanf("%d", &payment);

    if (payment >= 200 ){
        total = payment - (0.02*payment);
        printf("Total payment: %d" , total);
    }
    else if (payment>= 400)
    {
        total = payment - (0.05*payment);
        printf("Total payment: %d" , total);
    }
    else if (payment >= 800)
    {
        total = payment - (0.1*payment);
        printf("Total payment: %d" , total);
    }
    else if (payment>=1000)
    {
        total = payment - (0.15*payment);
        printf("Total payment: %d " , total);
    }
    
    
}

    
   

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
