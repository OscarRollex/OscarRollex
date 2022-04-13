//program to display the cube of the number
#include<stdio.h>
int main()
{
    int num, ctr;
    printf("Enter number of terms: ");
    scanf("%d", &ctr);
    for(num=1; num<=ctr; num++)
    {
        printf("The Number is: %d\n and cube of %d is: %d\n", num, num, num*num*num);
    }
    return 0;
}
