//program to determine whether a person is eligible to vote based on age and nationality
#include<stdio.h>
int main()
{
    int age;
    char nat[]="Kenyan";
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Enter your nationality:");
    scanf("%s", nat);
    if(age>=18)
    {
        printf("You are eligible to vote");
    }
    else
    {
        printf("You are not eligible to vote");
    }


    return 0;
}
