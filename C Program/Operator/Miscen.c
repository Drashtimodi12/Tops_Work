//sizeof(operand)

#include<stdio.h>
int main()
{
    int num1;
    float marks;
    long digits;
    double d;
    char ch;
    long double num2;

    printf("Size of integer=%d \n",sizeof(num1));
    printf("Size of float=%d \n",sizeof(marks));
    printf("Size of long=%d \n",sizeof(digits));
    printf("Size of double=%d \n",sizeof(d));
    printf("Size of char=%d \n",sizeof(ch));
    printf("Size of long double=%d \n",sizeof(num2));
}