/* Loop has basic parts:
 1. Initialization 
 2. Condition
 3. increment/ decrement

 syntax:
 do .. while loop
 initialization;
 do{
    body of loop;
    increment/decrement
 }
while(Condition); */


// print number in descending order.
#include<stdio.h>
int main()
{
    int num=10;
    do
    {
        printf("%d\t",num);
        num--;
    }
    while(num>=0);
}