#include<stdio.h>

int Cal(int n){
    int i;
    int sum = 0;
    while (i <= n){
        sum = sum + i;
        i ++;
    }
    /*
    for (int i=1, i<=n;i++) {
        sum = sum + i;
    }return sum;
    */

}
int main(){
    int n; 
    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("The result is: %d", Cal(n));
    return 0;
 }