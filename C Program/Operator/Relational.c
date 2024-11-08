//<,>,<=,>=,==,!=
#include<stdio.h>
int main()
{
    int num1,num2,a=10, b=23;
    printf("Enter number:");
    scanf("%d %d",&num1,&num2);
    printf("Grater=%d \n",num1>num2);
    printf("Less=%d \n",num1<num2);
    printf("Greter Equal=%d \n",a>=b);
    printf("Less Equal=%d \n",a<=b);
    printf("Double Equal=%d \n",a==b);
    printf("Not Equal=%d \n",a!=b);
}