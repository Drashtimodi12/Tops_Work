// simple if syntax:
/*
if(condition){
execution part.
}
*/
// program to print whether the number is positive.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Number is positive.");
    }
}