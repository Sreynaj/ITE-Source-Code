#include<stdio.h>
int main(){
    int row,col;
    for (row = 3 ; row<=3; ++ row)
    {
        for (col=1; col<=row; ++col)
        {
            printf("%d \t ", col);
        }
        printf("\n");
    }
    return 0;
    
}