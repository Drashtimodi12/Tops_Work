//if ..elseif..else
/*syntax:
if(condition){
}
elseif (condition){
}
elseif(condition){
}
..
else{
}
*/

#include <stdio.h>
int main()
{
    int Num;
    printf("Enter number:");
    scanf("%d",&Num);

    if (Num == 10)
        printf("Number is 10");
    else if (Num == 15)
        printf("Number is 15");
    else if (Num == 20)
        printf("Number is 20");
    else
        printf("Number is not present");
}