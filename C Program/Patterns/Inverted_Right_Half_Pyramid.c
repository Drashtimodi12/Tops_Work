/*
* * * * *  
* * * *  
* * *  
* *  
*  
*/

#include <stdio.h>  
int main()   
{  
   int i, space, row;  
   printf("Enter the number of rows: ");  
   scanf("%d", &row);  
   for (i = row; i >= 1; i--)   
   {  
          for (space = 1; space <= i; space++)   
      {  
                printf("* ");  
           }  
               printf("\n");  
   }  
   return 0;  
}  