#include <stdio.h>

/*In while loop, a condition is evaluated before processing 
a body of the loop. If a condition is true then and only then
the body of a loop is executed.*/

int main (){
  int  i=1;
  int sum= 0;

  /*printf("Enter your limit number: ");
  scanf("%d", & n);*/

  while (i<=5){
    sum = sum + i;
    printf("sum = %d\n",sum);
    i++;
  
  }
  printf("Total sum: %d \n", sum);
  }
/*Syntax of While Loop in C:
while (condition) {
    statements;
}
*/