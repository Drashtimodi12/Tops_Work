// function syntax:
// return type function name(parameters/arguments){
//     // body of the function
// }
/*
task :=
WAP to print a reverse number using function */;

#include<stdio.h>
int sum(); // function declaration
int main()
{
sum();   // function call;
sum();
}
int sum()   // function defination
{  
    int num1,num2,res;
    printf("Enter numbers:");
    scanf("%d %d",&num1,&num2);
    res=num1+num2;
    printf("Total=%d",res);
}