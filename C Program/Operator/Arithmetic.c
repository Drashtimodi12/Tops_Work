//+,-,/,*,%,++,--;
#include<stdio.h>
int main()
{
   int res, num1, num2;
   printf("Enter number:");
   scanf("%d %d",&num1,&num2);
///printf("\n res=%d",num1+num2);
   res= num1+num2;
   printf("\n ADD=%d",res);
   res= num1-num2;
   printf("\n SUB=%d",res);
   res= num1*num2;
   printf("\n MUL=%d",res);
   res= num1/num2;
   printf("\n DIV=%d",res);
   res=num1%num2;
   printf("\n MOD=%d",res);


   printf("\n Post increment=%d",num1++);
   printf("\n Num1=%d",num1);
   printf("\n Pri increment=%d",++num1);

   printf("\n Post decrement=%d",num2--);
   printf("\n Num2=%d",num2);
   printf("\n Pri decrement=%d",--num2); 
   return 0;
}
 


