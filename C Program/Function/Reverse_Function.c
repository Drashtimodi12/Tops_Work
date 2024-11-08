#include<stdio.h>
int reverse()
{
    int num, rev=0, rem;
    printf("Enter number:");
    scanf("%d", &num);
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    return rev;
}
int main()
{
   printf("Reverse=%d", reverse());
}



