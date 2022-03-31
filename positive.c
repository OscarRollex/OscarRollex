//program to check whether a number is positive or negative
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d", &num);
    if(num>=0)
    {
        printf("The number is positive");
    }
    else
    {
        printf("The number is negative");
    }
    return 0;
}
