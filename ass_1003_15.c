#include <stdio.h>
int main() 
{
    float fahrenheit, celsius;

    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Conversion formula
    celsius = (fahrenheit - 32) * 5 / 9;

    // Output result
    printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);

    return 0;
}
