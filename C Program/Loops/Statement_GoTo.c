// goto statement
// syntax:
// label_name :
//     execution part;

#include<stdio.h>
int main()
{
    int num;
label:
    printf("\n Enter  1 to exit :");
    scanf("%d",&num);
    if(num!=1)
    {
       printf(" \n you enter %d",num);
        goto label;
    }
}