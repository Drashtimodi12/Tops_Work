#include<stdio.h>
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        n=n*fact(n-1);
    }
}
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    printf("Factorial=%d", fact(num));
}



