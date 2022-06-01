#include<stdio.h>

int main(){
    int number;

    printf('Enter one integer:');
    scanf("%d", &number);

    if (number %2==0){
        printf("is an even number", number);
    }
    else{
        printf("is an odd number", number);
    }
    return 0;
}