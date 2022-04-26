//function to input temperature in Centigrade and convert toFahrenheit
#include<stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature (must be in celsius): ");
    scanf("%f", &celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("%.1fCelsius=%.1fFahrenheit", celsius, fahrenheit);
    return 0;
}
