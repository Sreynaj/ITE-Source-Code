#include<stdio.h>

int main(){
    int number; 
    int min;
    int max;
    int even_num = 0;
    int odd_number = 0 ;
    int i; 

    printf("Enter your minimum number: ");
    scanf("%d", &min);
    printf("Enter your maximum number:");
    scanf("%d", &max); 
         
    for (i=min; i<=max; i++)
    {
        if(i% 2==0)
        {
            even_num ++; 
        }
        else 
        {
            odd_number ++;
        }
    }
    printf("Even Number: %d \n" , even_num);
    printf("Odd number: %d \n", odd_number); 

    return 0;
}

    

    
