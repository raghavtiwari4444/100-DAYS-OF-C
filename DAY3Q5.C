/* Write a program to convert temperature from Celsius to Fahrenheit

f = (9/5 * c )+ 32 */

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9 / 5) * celsius + 32;

    printf("Temperature in Fahrenheit is: %f\n", fahrenheit);

    return 0;
}