//program to calculate cube and square of a number
#include<stdio.h>
int main()
{
    int input, output, output_2;

    printf("Enter a number: ");
    scanf("%d", &input);

    output=cube(input);  //calling function
    output_2=square(input);
    printf("\n The cube of %d is %d", input, output);
    printf("\n The square of %d is %d", input, output_2);
    return 0;
}
int cube(int num)  //function definition
{
    int num_cubed;
    num_cubed=num*num*num;
    return num_cubed;
}
int square(int x)
{
    int num_squared;
    num_squared=x*x;
    return num_squared;
}
