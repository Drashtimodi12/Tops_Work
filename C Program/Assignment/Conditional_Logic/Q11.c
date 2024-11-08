// WAP to find number is even or odd using ternary operator
#include<stdio.h>
int main()
{
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    (a%2==0) ? printf("%d is Even.",a) : printf("%d is Odd.",a);
}