#include<stdio.h>
/*For loop in C
A for loop is a more efficient loop structure in ‘C’ programming. 
The general structure of for loop syntax in C is as follows:

Syntax of For Loop in C:
for (initial value; condition; incrementation or decrementation ) 
{
  statements;
} 
*/
int main()
{
	int number;
	for(number=0;number<=10;number++)	//for loop to print 1-10 numbers
	{
		printf("%d\n",number);		//to print the number
	}
	return 0;
}