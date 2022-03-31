//program to accept two integers from the user and calculate the product of them
#include<stdio.h>
int main()
{
    int a;
    int b;
    int product;
    printf("Enter the first integer:");
    scanf("%d", &a);
    printf("Enter the second integer:");
    scanf("%d", &b);
    product=a*b;
    printf("The product of two integers is: %d",product);
    return 0;
}
