// taking input from user.

#include<stdio.h>
int main(){
    int num;   // variable
    char ch;   // v
    float marks;  // v

    printf("Enter character: ");    // o/p
    scanf("%c",&ch);   //  i/p
    printf("Character=%c \n",ch);

    printf("\nEnter num: ");
    scanf("%d",&num);
    printf("Num=%d\n",num);

    printf("\nEnter marks: ");
    scanf("%f",&marks);
    printf("Marks=%f\n",marks);
}