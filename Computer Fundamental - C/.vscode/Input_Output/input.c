#include<stdio.h> /*link setion */

/*value delcare in Global*/
int main (){
    char ur_name[12];
    int ur_score;
    float ur_final; 

    printf("Enter Your Name:");
    scanf("%s", &ur_name);
    /*printf("\n" ur_name);*/

    printf("========Result======");
  
    printf("\n""Your score:");
    scanf("%d", &ur_score);
    printf("%d", ur_score);

    printf("Your final:");
    scanf("%f", &ur_final);
    printf("%f", ur_final);
   return 0;
}