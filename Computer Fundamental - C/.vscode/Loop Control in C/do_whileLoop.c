#include<stdio.h>

/*Do-While loop in C
A do…while loop in C is similar to the while loop except
that the condition is always executed after the body of a 
loop. It is also called an exit-controlled loop.*/

int main(){
    int num=0; //initailizing the variable
    do{   //do-while loop
        printf("%d\n", 2*num);
        num++; //incrementing operation
    }while(num<=10);

    return 0;

}