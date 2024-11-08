// no arguments with return
#include<stdio.h>
int multiply()  // function defination
{
    int num1,num2,res;
    printf("Enter num1bers:");
    scanf("%d %d",&num1,&num2);
    res=num1*num2;
    return res;
}
int main()
{
//  multiply();
    printf("Multiplication=%d",multiply());  // function call  
}