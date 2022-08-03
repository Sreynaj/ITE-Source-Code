#include<stdio.h>
int main(){
    int row,col,num;
    printf("Enter an integer:");
    scanf("%d", &num); 
       for (row = 1; row<=num; ++ row)
    {
        for (col=1; col<=num; ++col)
        {
            printf("%d \t ", col*row);
        }
        printf("\n");
    }
    return 0;




}