#include<stdio.h>
//can be changed to both integer and float number
int main(){
    int a;
    int b;
    int c;
    int max;


    printf("Find the largest number \n");

    printf("Enter an integer: " );
    scanf("%d", &a);
   
    printf("Enter an integer: " );
    scanf("%d" , &b);
   
    printf("Enter an integer: " );
    scanf("%d" , &c);


    max = a;
    if (b>max){
        max=b;
    }
    if (c>max){
        max=c;
    }
        printf("The largest number is: %d \n", max);

    return 0 ; 

}