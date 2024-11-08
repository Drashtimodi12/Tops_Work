//&,|,^,~,>>,<<

#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter number:");
    scanf("%d %d",&a,&b);

    printf("Bitwise AND=%d \n",a & b);
    printf("Bitwise OR=%d \n",a | b);
    printf("Bitwise XOR=%d \n",a ^ b);
    printf("Bitwise First Complement=%d \n", ~a);   //[-(num+1)]
    printf("Bitwise Left Shift=%d \n", a << b);
    printf("Bitwise Right Shift=%d \n", a >> b);
}