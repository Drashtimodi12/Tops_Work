// palindrome number : 1221 is a palindrome number number which is same from both the side.
#include<stdio.h>
int main()
{
    int num,rem,rev=0;
    printf("Enter number:");
    scanf("%d",&num);
    int original_num=num;
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(rev==original_num)
    {
        printf("Number is palindrome.");
    }
    else
    {
        printf("Number is not a palindrome.");
    }
}