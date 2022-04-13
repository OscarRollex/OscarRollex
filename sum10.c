//program to find sum of first 10 natural numbers
#include<stdio.h>
int main()
{
    int num, sum=0;
    printf("The sum of first 10 natural numbers are: \n");
    for(num=1; num<=10; num++)
    {
        sum=sum+num;
        printf("%d", num);
    }
    printf("\n The Sum is: %d\n", sum);
    return 0;
}
