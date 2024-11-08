/* Loop has basic parts:
 1. Initialization 
 2. Condition
 3. increment/ decrement

 syntax:
 for loop:
 for(initialization ;Condition;increment/decrement){
    // body of loop;
 } */


/* print number from 1 to 100
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        printf("%d \t",i);
    }
}*/

// 100 to 1
#include<stdio.h>
int main()
{
    int i;
    for(i=100;i>=1;i--)
    {
        printf("%d \t",i);
    }
}