//=,+=,-=,*=,/=,%=,&=,|=,^=,>>=,<<=

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter number:");
    scanf("%d %d",&a, &b);

    printf("Simple Assignment=%d \n",a = b);
    printf("Plus and assign=%d \n",a += b);
    printf("Minus and assign=%d \n",a -= b);
    printf("Multiply and assign=%d \n",a *= b);
    printf("Divide and assign=%d \n",a /= b);
    printf("Modulus and assign=%d \n",a %= b);
    printf("AND and assign=%d \n",a &= b);
    printf("OR and assign=%d \n",a |= b);
    printf("XOR and assign=%d \n",a ^= b);
    // printf("Rightshift and assign=%d \n",a >>= b);
    // printf("Leftshift and assign=%d \n",a <<= b);
}