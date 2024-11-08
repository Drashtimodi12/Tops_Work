#include<stdio.h>
int main()
{
    int num;
    printf("Enter number to break:");
    scanf("%d",&num);
    for(int i=0;i<100;i++)
    {
        if(i==num)
        continue;
        else
        printf("%d \t",i);
    }
}