#include<stdio.h>
int main()
{
    int time;
    printf("Enter Time:");
    scanf("%d", &time);

    if(time>=0 && time<=12)
    {
        printf("Good Morning %d", time);
    }
     else if(time>=12 && time<=15)
        {
            printf("Good Aftrnoon %d", time);
        }
        else if(time>=15 && time<=20)
        {
            printf("Good Evening %d", time);
        }
        else if(time>=20 && time<=23)
        {
            printf("Good Nigt %d", time);
        }
        else
        {
            printf("Not Time %d", time);
        }
}