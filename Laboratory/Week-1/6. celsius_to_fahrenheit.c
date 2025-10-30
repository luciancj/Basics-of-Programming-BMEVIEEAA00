#include <stdio.h>

int main(void)
{
    double celsius, fahrenheit;
    
    printf("Celsius to Fahrenheit Converter\n\n");
    
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);
    
    // Convert to Fahrenheit
    fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    
    printf("%.2f°C = %.2f°F\n", celsius, fahrenheit);
    
    return 0;
}
