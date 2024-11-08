// with arguments with return
#include<stdio.h>
int sub(int ,int );  // function decalaration
int main()
{
    int num1,num2;  // local variables
    printf("Enter numbers:");
    scanf("%d %d",&num1,&num2);
    printf("Subtraction=%d",sub(num1,num2));  // call with actual parameters
}
    int sub(int a,int b)  // function defination
{
    return a-b;
}