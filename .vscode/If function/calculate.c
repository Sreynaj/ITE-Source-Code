#include<stdio.h>

int main(){
    char operator; 
    int number1, number2, total_number ;
    start:
    printf("A mini calculator!\n");
    printf("\nYou can calculate that by \n\n - Choose one of the operator + - x / \n\n - And then your first and sencond number!\n");
    printf("\n Choose one operater: ");
    operator = getchar();


 switch(operator){
     case '+' :
     printf(" \n Enter your first number: "); 
     scanf("%d" , &number1) ;
     printf(" \n Enter your second number: "); 
     scanf("%d" , &number2) ;
     total_number = number1 + number2 ;
     printf("TOTAL: " "%d + %d = %d \n" , number1,number2, total_number) ; 
     
     break;


     case '-' : 
     printf("Enter your first number:"); 
     scanf("%d" , &number1) ;
     printf("Enter your second number:"); 
     scanf("%d" , &number2) ;
     total_number = number1 - number2 ;
     printf(" \n TOTAL: " "%d - %d = %d \n" , number1,number2, total_number) ; 
     break;


     case 'x': 
     printf("Enter your first number:"); 
     scanf("%d" , &number1) ;
     printf("Enter your second number:"); 
     scanf("%d" , &number2) ;
     total_number = number1 * number2 ;
     printf("TOTAL: " "%d x %d = %d \n" , number1,number2, total_number) ; 
     break;

     case '/': 
     printf("Enter your first number:"); 
     scanf("%d" , &number1) ;
     printf("Enter your second number:"); 
     scanf("%d" , &number2) ;
     total_number = number1 / number2 ;
     printf("TOTAL: " "%d / %d = %d \n" , number1,number2, total_number) ; 
     break;

 }

 goto start;

}