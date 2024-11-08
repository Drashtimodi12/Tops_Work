//(operand1) ? (operand2-true) : (operand3;-false)

#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter number:");
    scanf("%d %d",&num1,&num2);
    (num1>num2) ? printf("Num1 is greter") : printf("Num2 is greter");
}
   
