//&&,||,!

#include<stdio.h>
int main()
{
    int num1,num2,num3=4;
    printf("Enter number:");
    scanf("%d %d",&num1,&num2);

    printf("Logical AND=%d \n",num1>90 && num2> 0);
    printf("Logical OR=%d \n",num1<12 ||num2>34);
    printf("Logical NOT=%d \n", !num3);
    // printf("Num1=%d \n",num3);
}