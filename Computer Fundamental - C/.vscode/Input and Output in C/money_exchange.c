#include<stdio.h>
//converting USD to R
int main(){
    char exchange; 
    int amount; 
    int total_amount;

    printf("How would you like to exchange? \n");
    printf("Press A to change from USD to Riel \n");
    printf("Press B to exchange from Riel to USD \n") ;
    printf("Press C to exchange from Bart to Riel \n");
    printf("Press D to exchange from Riel to Bart\n");
    printf("Your answer:", getchar);

    
    exchange = getchar();

    switch(exchange){
     case 'A' : //USD-R
     printf("Your Amount : "); 
     scanf("%d " , &amount) ;
     total_amount = amount*4000 ;
     printf("TOTAL AMOUNT : %d Riel", total_amount ) ; 
     break;
      case 'a' : //USD-R
     printf("Your Amount : "); 
     scanf("%d" , &amount) ;
     total_amount = amount*4000 ;
     printf("TOTAL AMOUNT : %d Riel", total_amount ) ; 
     break;

     case 'B' : //R-USD
     printf("Your Amount : "); 
     scanf("%d" , &amount) ;
     total_amount = amount/4000 ;
     printf("TOTAL AMOUNT : %d USD", total_amount ) ; 
     break;
     case 'b' : //R-USD
     printf("Your Amount : "); 
     scanf("%d" , &amount) ;
     total_amount = amount/4000 ;
     printf("TOTAL AMOUNT : %d USD", total_amount ) ; 
     break;


     case 'C' : //B-R
     printf("Your Amount : "); 
     scanf("%d" , &amount) ;
     total_amount = amount*100 ;
     printf("TOTAL AMOUNT : %d Reil ", total_amount  ) ; 
     break;
     case 'c' : //B-R
     printf("Your Amount : "); 
     scanf("%d" , &amount) ;
     total_amount = amount*100 ;
     printf("TOTAL AMOUNT : %d Reil ", total_amount  ) ; 
     break;

     case 'D' ://Riel to Bart
     printf("Your Amount : "); 
     scanf("%d" , &amount) ;
     total_amount = amount/100 ;
     printf("TOTAL AMOUNT : %d Bart ", total_amount ) ; 
     break;
     case 'd' ://Riel to Bart
     printf("Your Amount : "); 
     scanf("%d" , &amount) ;
     total_amount = amount/100 ;
     printf("TOTAL AMOUNT : %d Bart ", total_amount ) ; 
     break;
    }

}