#include<stdio.h>
int tem;
int Tem(){
    if (tem >= 28){
        printf("Air Con = On!");
    }
    else if (tem <= 18){
        printf("Air Con = Off!\n");
    }
}
int main(){
    //int tem = rand()%100 + 10; 
    printf("Enter your room temperature: ");
    scanf("%d \n ", &tem);
    printf("Your room temperature is: %d \n",Tem(tem));

}