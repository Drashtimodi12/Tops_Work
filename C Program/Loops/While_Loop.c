/* Loop has basic parts:
 1. Initialization 
 2. Condition
 3. increment/ decrement

 syntax:
 while loop
 initialization;
 while(Condition)
 {
    body of loop;
    increment/decrement;
 }  */

// print numbers 1 to 10;
#include<stdio.h>
int main()
{
    int i=1;
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    while(i<=num)
    {
        printf("%d \t ",i);
        i++;
    }
}