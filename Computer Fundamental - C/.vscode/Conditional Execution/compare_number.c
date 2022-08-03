#include<stdio.h>

int main(){
    int a;
    int b ; 
    int min;
    int max;

    printf("Enter the first number:");
    scanf("%d", &a);

    printf("Enter the second number:");
    scanf("%d", &b);


    if (b>a){
        printf( b ," %d is bigger than %d" ,a);
    }
    else{
       printf(a, " %d is bigger than %d", b);
    } 


    return 0;

}