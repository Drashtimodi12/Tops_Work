/*
         * 
       * * *
     * * * * *
   * * * * * * *
 * * * * * * * * *
 */
#include <stdio.h>
int main()
{
    int rows = 5;
    for (int row = 0; row < rows; row++) 
    {
        for (int space = 0; space < 2 * (rows - row) - 1; space++) 
        {
            printf(" ");
        }
        for (int col = 0; col < 2 * row + 1; col++) 
        {
            printf("* ");
        }
        printf("\n");
    }
}
