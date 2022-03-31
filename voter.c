//program to determine voter legibility
#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    if (age>=18)
    {
        printf("Ypu are eligible to vote");
    }
    else
    {
        printf("You are not eligible to vote");
    }
    return 0;
}
