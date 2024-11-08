// with arguments no return
#include<stdio.h>
int a,b;  // global variables
int add(int a,int b)   // in this a,b are formal parameters
{
    printf("\n Result=%d",a+b);
}
int main()
{
    int a,b;    // local variables;
    printf("Enter numbers:");
    scanf("%d %d",&a,&b);
    add(a,b);  // function call parameters are called actual parameters
    add(52,20);
}